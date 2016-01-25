/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKBOXWRAP_H
#define NATIVE_EXTENSION_VTK_VTKBOXWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkBox.h>

#include "vtkImplicitFunctionWrap.h"

class VtkBoxWrap : public VtkImplicitFunctionWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkBoxWrap(vtkSmartPointer<vtkBox>);
		VtkBoxWrap();
		~VtkBoxWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void EvaluateFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXMax(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXMin(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
