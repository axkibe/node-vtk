/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKVOLUMEMAPPERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKVOLUMEMAPPERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkVolumeMapper.h>

#include "vtkAbstractVolumeMapperWrap.h"

class VtkVolumeMapperWrap : public VtkAbstractVolumeMapperWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkVolumeMapperWrap(vtkSmartPointer<vtkVolumeMapper>);
		VtkVolumeMapperWrap();
		~VtkVolumeMapperWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CroppingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CroppingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBlendMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCropping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCroppingMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCroppingMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCroppingRegionFlags(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCroppingRegionFlagsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCroppingRegionFlagsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBlendMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBlendModeToAdditive(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBlendModeToComposite(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBlendModeToMaximumIntensity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBlendModeToMinimumIntensity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCropping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCroppingRegionFlags(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCroppingRegionFlagsToCross(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCroppingRegionFlagsToFence(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCroppingRegionFlagsToInvertedCross(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCroppingRegionFlagsToInvertedFence(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCroppingRegionFlagsToSubVolume(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCroppingRegionPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
