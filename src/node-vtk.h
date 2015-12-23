#ifndef NATIVE_EXTENSION_VTK_H
#define NATIVE_EXTENSION_VTK_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkConeSource.h>

class VtkConeSourceWrap : public Nan::ObjectWrap {
	public:
		static void Init(v8::Local<v8::Object> exports);
		
		vtkSmartPointer<vtkConeSource> coneSource;

	private:
		explicit VtkConeSourceWrap( vtkSmartPointer<vtkConeSource> coneSource );
		~VtkConeSourceWrap( );
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static Nan::Persistent<v8::Function> constructor;

		static void SetHeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Update(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

NAN_METHOD( render );

#endif

