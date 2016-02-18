/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCAMERAWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCAMERAWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCamera.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkCameraWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCameraWrap(vtkSmartPointer<vtkCamera>);
		VtkCameraWrap();
		~VtkCameraWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ApplyTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Azimuth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeViewPlaneNormal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Dolly(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Elevation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCameraLightTransformMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClippingRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCompositeProjectionTransformMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDirectionOfProjection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEyeAngle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEyePlaneNormal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEyePosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEyeSeparation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEyeTransformMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFocalDisk(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFocalPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFreezeFocalPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFrustumPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLeftEye(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetModelTransformMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetModelViewTransformMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetModelViewTransformObject(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrientationWXYZ(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetParallelProjection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetParallelScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProjectionTransformMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProjectionTransformObject(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRoll(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScreenBottomLeft(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScreenBottomRight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScreenTopRight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetThickness(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseHorizontalViewAngle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseOffAxisProjection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUserTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUserViewTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetViewAngle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetViewPlaneNormal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetViewShear(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetViewTransformMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetViewTransformObject(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetViewUp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWindowCenter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OrthogonalizeViewUp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ParallelProjectionOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ParallelProjectionOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Pitch(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Render(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Roll(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetClippingRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEyeAngle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEyePosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEyeSeparation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEyeTransformMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFocalDisk(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFocalPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFreezeFocalPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLeftEye(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetModelTransformMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetObliqueAngles(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetParallelProjection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetParallelScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRoll(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScreenBottomLeft(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScreenBottomRight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScreenTopRight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetThickness(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseHorizontalViewAngle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseOffAxisProjection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUserTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUserViewTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetViewAngle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetViewShear(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetViewUp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWindowCenter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdateViewport(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseHorizontalViewAngleOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseHorizontalViewAngleOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseOffAxisProjectionOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseOffAxisProjectionOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ViewingRaysModified(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Yaw(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Zoom(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCAMERAWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCAMERAWRAP_CLASSDEF
#endif
};

#endif
