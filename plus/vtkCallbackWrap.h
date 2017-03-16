#ifndef NATIVE_EXTENSION_VTK_CALLBACK_WRAP_H
#define NATIVE_EXTENSION_VTK_CALLBACK_WRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkObject.h>
#include <vtkCommand.h>
#include "vtkCommandWrap.h"


class vtkCallback : public vtkCommand
{
public:
  virtual void Execute(vtkObject *, unsigned long, void*);
  Nan::Persistent<v8::Function> callback;

  static vtkCallback* New() {return new vtkCallback;}
};



class VtkCallbackWrap : public VtkCommandWrap
{
    public:
        using Nan::ObjectWrap::Wrap;
        static void Init(v8::Local<v8::Object> exports);
        static void InitPtpl();
        static void ConstructorGetter(
            v8::Local<v8::String> property,
            const Nan::PropertyCallbackInfo<v8::Value>& info);

        VtkCallbackWrap(vtkSmartPointer<vtkCallback>);
        VtkCallbackWrap();
        ~VtkCallbackWrap( );
        static Nan::Persistent<v8::FunctionTemplate> ptpl;

    private:
        static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);
};


#endif
