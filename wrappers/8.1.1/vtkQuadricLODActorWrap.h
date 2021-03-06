/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKQUADRICLODACTORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKQUADRICLODACTORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkQuadricLODActor.h>

#include "vtkActorWrap.h"
#include "../../plus/plus.h"

class VtkQuadricLODActorWrap : public VtkActorWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkQuadricLODActorWrap(vtkSmartPointer<vtkQuadricLODActor>);
		VtkQuadricLODActorWrap();
		~VtkQuadricLODActorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void DeferLODConstructionOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeferLODConstructionOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCamera(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCollapseDimensionRatio(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCollapseDimensionRatioMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCollapseDimensionRatioMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataConfiguration(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataConfigurationMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataConfigurationMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDeferLODConstruction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLODFilter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumDisplayListSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumDisplayListSizeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumDisplayListSizeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPropType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPropTypeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPropTypeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStatic(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Render(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCamera(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCollapseDimensionRatio(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataConfiguration(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataConfigurationToUnknown(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataConfigurationToXLine(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataConfigurationToXYPlane(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataConfigurationToXYZVolume(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataConfigurationToXZPlane(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataConfigurationToYLine(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataConfigurationToYZPlane(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataConfigurationToZLine(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDeferLODConstruction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLODFilter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumDisplayListSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPropType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPropTypeToActor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPropTypeToFollower(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStatic(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StaticOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StaticOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKQUADRICLODACTORWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKQUADRICLODACTORWRAP_CLASSDEF
#endif
};

#endif
