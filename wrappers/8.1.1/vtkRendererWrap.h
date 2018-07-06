/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKRENDERERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKRENDERERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkRenderer.h>

#include "vtkViewportWrap.h"
#include "../../plus/plus.h"

class VtkRendererWrap : public VtkViewportWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkRendererWrap(vtkSmartPointer<vtkRenderer>);
		VtkRendererWrap();
		~VtkRendererWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddActor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AddCuller(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AddLight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AddVolume(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AutomaticLightCreationOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AutomaticLightCreationOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BackingStoreOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BackingStoreOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CaptureGL2PSSpecialProp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Clear(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ClearLights(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeVisiblePropBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CreateLight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeviceRenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeviceRenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EraseOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EraseOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActiveCamera(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAllocatedRenderTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAmbient(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAutomaticLightCreation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBackgroundTexture(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBackingStore(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClippingRangeExpansion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClippingRangeExpansionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClippingRangeExpansionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCullers(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDelegate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDraw(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetErase(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFXAAOptions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInformation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInteractive(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLastRenderTimeInSeconds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLastRenderingUsedDepthPeeling(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLayer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLightFollowCamera(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLights(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumNumberOfPeels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNearClippingPlaneTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNearClippingPlaneToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNearClippingPlaneToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPropsRendered(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOcclusionRatio(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOcclusionRatioMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOcclusionRatioMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPass(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPreserveColorBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPreserveDepthBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRenderWindow(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelector(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTexturedBackground(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTiledAspectRatio(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTimeFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTwoSidedLighting(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseDepthPeeling(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseDepthPeelingForVolumes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseFXAA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseHiddenLineRemoval(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseShadows(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVTKWindow(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVolumes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZ(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InteractiveOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InteractiveOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsActiveCameraCreated(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LightFollowCameraOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LightFollowCameraOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MakeCamera(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MakeLight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PickProp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PreserveColorBufferOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PreserveColorBufferOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PreserveDepthBufferOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PreserveDepthBufferOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveActor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveAllLights(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveCuller(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveLight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveVolume(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Render(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ResetCamera(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ResetCameraClippingRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetActiveCamera(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAllocatedRenderTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAmbient(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAutomaticLightCreation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBackgroundTexture(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBackingStore(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetClippingRangeExpansion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDelegate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDraw(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetErase(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFXAAOptions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGL2PSSpecialPropCollection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInformation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInteractive(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLayer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLightCollection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLightFollowCamera(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumNumberOfPeels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNearClippingPlaneTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOcclusionRatio(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPass(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPreserveColorBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPreserveDepthBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRenderWindow(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTexturedBackground(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTwoSidedLighting(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseDepthPeeling(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseDepthPeelingForVolumes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseFXAA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseHiddenLineRemoval(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseShadows(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StereoMidpoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TexturedBackgroundOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TexturedBackgroundOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Transparent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TwoSidedLightingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TwoSidedLightingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdateLightsGeometryToFollowCamera(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseDepthPeelingForVolumesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseDepthPeelingForVolumesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseDepthPeelingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseDepthPeelingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseFXAAOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseFXAAOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseHiddenLineRemovalOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseHiddenLineRemovalOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseShadowsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseShadowsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ViewToWorld(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void VisibleActorCount(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void VisibleVolumeCount(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WorldToView(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKRENDERERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKRENDERERWRAP_CLASSDEF
#endif
};

#endif