/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMPLICITFUNCTIONCOLLECTIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMPLICITFUNCTIONCOLLECTIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImplicitFunctionCollection.h>

#include "vtkCollectionWrap.h"

class VtkImplicitFunctionCollectionWrap : public VtkCollectionWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkImplicitFunctionCollectionWrap(vtkSmartPointer<vtkImplicitFunctionCollection>);
		VtkImplicitFunctionCollectionWrap();
		~VtkImplicitFunctionCollectionWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddItem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNextItem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
