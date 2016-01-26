/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSMARTVOLUMEMAPPERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSMARTVOLUMEMAPPERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkSmartVolumeMapper.h>

#include "vtkVolumeMapperWrap.h"

class VtkSmartVolumeMapperWrap : public VtkVolumeMapperWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkSmartVolumeMapperWrap(vtkSmartPointer<vtkSmartVolumeMapper>);
		VtkSmartVolumeMapperWrap();
		~VtkSmartVolumeMapperWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInteractiveUpdateRate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInteractiveUpdateRateMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInteractiveUpdateRateMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInterpolationMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInterpolationModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInterpolationModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLastUsedRenderMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRequestedRenderMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Render(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInteractiveUpdateRate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolationMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolationModeToCubic(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolationModeToLinear(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolationModeToNearestNeighbor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRequestedRenderMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRequestedRenderModeToDefault(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRequestedRenderModeToRayCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRequestedRenderModeToRayCastAndTexture(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
