/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKAMRVOLUMEMAPPERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKAMRVOLUMEMAPPERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAMRVolumeMapper.h>

#include "vtkVolumeMapperWrap.h"

class VtkAMRVolumeMapperWrap : public VtkVolumeMapperWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkAMRVolumeMapperWrap(vtkSmartPointer<vtkAMRVolumeMapper>);
		VtkAMRVolumeMapperWrap();
		~VtkAMRVolumeMapperWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetArrayAccessMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetArrayId(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBlendMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCropping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCroppingRegionFlags(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInteractiveUpdateRate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInterpolationMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRequestedRenderMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRequestedResamplingMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResamplerUpdateTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Render(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SelectScalarArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBlendMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCropping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCroppingRegionFlags(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCroppingRegionPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInteractiveUpdateRate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolationMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolationModeToCubic(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolationModeToLinear(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolationModeToNearestNeighbor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfSamples(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRequestedRenderMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRequestedRenderModeToDefault(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRequestedRenderModeToGPU(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRequestedRenderModeToRayCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRequestedRenderModeToRayCastAndTexture(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRequestedRenderModeToTexture(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRequestedResamplingMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetResamplerUpdateTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdateResampler(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdateResamplerFrustrumMethod(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
