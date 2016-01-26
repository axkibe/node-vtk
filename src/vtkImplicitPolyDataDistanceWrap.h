/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMPLICITPOLYDATADISTANCEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMPLICITPOLYDATADISTANCEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImplicitPolyDataDistance.h>

#include "vtkImplicitFunctionWrap.h"

class VtkImplicitPolyDataDistanceWrap : public VtkImplicitFunctionWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImplicitPolyDataDistanceWrap(vtkSmartPointer<vtkImplicitPolyDataDistance>);
		VtkImplicitPolyDataDistanceWrap();
		~VtkImplicitPolyDataDistanceWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNoValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNoGradient(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNoValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
