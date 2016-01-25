/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKVOLUMERAYCASTMIPFUNCTIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKVOLUMERAYCASTMIPFUNCTIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkVolumeRayCastMIPFunction.h>

#include "vtkVolumeRayCastFunctionWrap.h"

class VtkVolumeRayCastMIPFunctionWrap : public VtkVolumeRayCastFunctionWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkVolumeRayCastMIPFunctionWrap(vtkSmartPointer<vtkVolumeRayCastMIPFunction>);
		VtkVolumeRayCastMIPFunctionWrap();
		~VtkVolumeRayCastMIPFunctionWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximizeMethod(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximizeMethodAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximizeMethodMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximizeMethodMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximizeMethod(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximizeMethodToOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximizeMethodToScalarValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif