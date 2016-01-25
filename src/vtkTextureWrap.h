/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTEXTUREWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTEXTUREWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTexture.h>

#include "vtkImageAlgorithmWrap.h"

class VtkTextureWrap : public VtkImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkTextureWrap(vtkSmartPointer<vtkTexture>);
		VtkTextureWrap();
		~VtkTextureWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void EdgeClampOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EdgeClampOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBlendingMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdgeClamp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInterpolate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMapColorScalarsThroughLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMappedScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetQuality(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRepeat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRestrictPowerOf2ImageSmaller(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InterpolateOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InterpolateOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsTranslucent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Load(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MapColorScalarsThroughLookupTableOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MapColorScalarsThroughLookupTableOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PostRender(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PremultipliedAlphaOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PremultipliedAlphaOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Render(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RepeatOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RepeatOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RestrictPowerOf2ImageSmallerOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RestrictPowerOf2ImageSmallerOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBlendingMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEdgeClamp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMapColorScalarsThroughLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetQuality(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetQualityTo16Bit(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetQualityTo32Bit(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetQualityToDefault(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRepeat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRestrictPowerOf2ImageSmaller(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
