/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKARROWSOURCEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKARROWSOURCEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkArrowSource.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkArrowSourceWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkArrowSourceWrap(vtkSmartPointer<vtkArrowSource>);
		VtkArrowSourceWrap();
		~VtkArrowSourceWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInvert(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShaftRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShaftRadiusMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShaftRadiusMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShaftResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShaftResolutionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShaftResolutionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTipLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTipLengthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTipLengthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTipRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTipRadiusMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTipRadiusMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTipResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTipResolutionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTipResolutionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InvertOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InvertOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInvert(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShaftRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShaftResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTipLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTipRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTipResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
