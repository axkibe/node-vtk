/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKVECTORNORMWRAP_H
#define NATIVE_EXTENSION_VTK_VTKVECTORNORMWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkVectorNorm.h>

#include "vtkDataSetAlgorithmWrap.h"

class VtkVectorNormWrap : public VtkDataSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkVectorNormWrap(vtkSmartPointer<vtkVectorNorm>);
		VtkVectorNormWrap();
		~VtkVectorNormWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetAttributeMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAttributeModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNormalize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NormalizeOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NormalizeOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAttributeMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAttributeModeToDefault(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAttributeModeToUseCellData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAttributeModeToUsePointData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNormalize(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
