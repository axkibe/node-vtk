/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKLIGHTKITWRAP_H
#define NATIVE_EXTENSION_VTK_VTKLIGHTKITWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkLightKit.h>

#include "vtkObjectWrap.h"

class VtkLightKitWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkLightKitWrap(vtkSmartPointer<vtkLightKit>);
		VtkLightKitWrap();
		~VtkLightKitWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddLightsToRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBackLightAzimuth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBackLightElevation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBackLightWarmth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFillLightAzimuth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFillLightElevation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFillLightWarmth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHeadLightWarmth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetKeyLightAzimuth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetKeyLightElevation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetKeyLightIntensity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetKeyLightWarmth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetKeyToBackRatio(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetKeyToBackRatioMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetKeyToBackRatioMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetKeyToFillRatio(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetKeyToFillRatioMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetKeyToFillRatioMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetKeyToHeadRatio(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetKeyToHeadRatioMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetKeyToHeadRatioMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaintainLuminance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShortStringFromSubType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStringFromSubType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStringFromType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MaintainLuminanceOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MaintainLuminanceOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Modified(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveLightsFromRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBackLightAngle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBackLightAzimuth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBackLightElevation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBackLightWarmth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFillLightAngle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFillLightAzimuth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFillLightElevation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFillLightWarmth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHeadLightWarmth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetKeyLightAngle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetKeyLightAzimuth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetKeyLightElevation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetKeyLightIntensity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetKeyLightWarmth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetKeyToBackRatio(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetKeyToFillRatio(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetKeyToHeadRatio(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaintainLuminance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Update(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
