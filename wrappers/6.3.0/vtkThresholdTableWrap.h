/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTHRESHOLDTABLEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTHRESHOLDTABLEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkThresholdTable.h>

#include "vtkTableAlgorithmWrap.h"

class VtkThresholdTableWrap : public VtkTableAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkThresholdTableWrap(vtkSmartPointer<vtkThresholdTable>);
		VtkThresholdTableWrap();
		~VtkThresholdTableWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ThresholdBetween(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif