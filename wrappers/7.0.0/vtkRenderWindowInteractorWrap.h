/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKRENDERWINDOWINTERACTORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKRENDERWINDOWINTERACTORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkRenderWindowInteractor.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkRenderWindowInteractorWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkRenderWindowInteractorWrap(vtkSmartPointer<vtkRenderWindowInteractor>);
		VtkRenderWindowInteractorWrap();
		~VtkRenderWindowInteractorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CharEvent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ClearPointerIndex(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ConfigureEvent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CreateDefaultPicker(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CreateOneShotTimer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CreateRepeatingTimer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CreateTimer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DestroyTimer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Disable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Enable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EnableRenderOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EnableRenderOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EndPickCallback(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EnterEvent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ExitCallback(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ExitEvent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ExposeEvent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FindPokedRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FlyTo(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FlyToImage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAltKey(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetControlKey(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDesiredUpdateRate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDesiredUpdateRateMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDesiredUpdateRateMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDolly(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEnableRender(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEventPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEventSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInitialized(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInteractorStyle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetKeyCode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetKeySym(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLastEventPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLightFollowCamera(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfFlyFrames(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfFlyFramesMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfFlyFramesMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetObserverMediator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPicker(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPickingManager(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointerIndex(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRenderWindow(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRepeatCount(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShiftKey(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStillUpdateRate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStillUpdateRateMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStillUpdateRateMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTimerDuration(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTimerDurationMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTimerDurationMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTimerEventDuration(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTimerEventId(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTimerEventPlatformId(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTimerEventType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseTDx(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVTKTimerId(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HideCursor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsOneShotTimer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsPointerIndexSet(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void KeyPressEvent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void KeyReleaseEvent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LeaveEvent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LeftButtonPressEvent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LeftButtonReleaseEvent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LightFollowCameraOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LightFollowCameraOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MiddleButtonPressEvent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MiddleButtonReleaseEvent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MouseMoveEvent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MouseWheelBackwardEvent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MouseWheelForwardEvent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReInitialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Render(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ResetTimer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RightButtonPressEvent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RightButtonReleaseEvent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAltKey(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetControlKey(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDesiredUpdateRate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDolly(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEnableRender(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEventInformation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEventInformationFlipY(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEventPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEventPositionFlipY(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEventSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInteractorStyle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetKeyCode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetKeyEventInformation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetKeySym(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLastEventPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLightFollowCamera(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfFlyFrames(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPicker(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPickingManager(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPointerIndex(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRenderWindow(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRepeatCount(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShiftKey(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStillUpdateRate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTimerDuration(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTimerEventDuration(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTimerEventId(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTimerEventPlatformId(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTimerEventType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseTDx(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShowCursor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Start(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StartPickCallback(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TerminateApp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdateSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UserCallback(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKRENDERWINDOWINTERACTORWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKRENDERWINDOWINTERACTORWRAP_CLASSDEF
#endif
};

#endif
