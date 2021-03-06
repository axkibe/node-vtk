/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKVOLUMEPROPERTYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKVOLUMEPROPERTYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkVolumeProperty.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkVolumePropertyWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkVolumePropertyWrap(vtkSmartPointer<vtkVolumeProperty>);
		VtkVolumePropertyWrap();
		~VtkVolumePropertyWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DisableGradientOpacityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DisableGradientOpacityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAmbient(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetColorChannels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComponentWeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDiffuse(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDisableGradientOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGradientOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGrayTransferFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIndependentComponents(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIndependentComponentsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIndependentComponentsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInterpolationType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInterpolationTypeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInterpolationTypeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInterpolationTypeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRGBTransferFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarOpacityUnitDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShade(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSpecular(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSpecularPower(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStoredGradientOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasGradientOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IndependentComponentsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IndependentComponentsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAmbient(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetComponentWeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDiffuse(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDisableGradientOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGradientOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIndependentComponents(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolationType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolationTypeToLinear(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolationTypeToNearest(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarOpacityUnitDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShade(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSpecular(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSpecularPower(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShadeOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShadeOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdateMTimes(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKVOLUMEPROPERTYWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKVOLUMEPROPERTYWRAP_CLASSDEF
#endif
};

#endif
