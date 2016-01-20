/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKINTERACTORSTYLEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKINTERACTORSTYLEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkInteractorStyle.h>

#include "vtkInteractorObserverWrap.h"

class VtkInteractorStyleWrap : public VtkInteractorObserverWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkInteractorStyleWrap(vtkSmartPointer<vtkInteractorStyle>);
		VtkInteractorStyleWrap();
		~VtkInteractorStyleWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInteractor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAutoAdjustCameraClippingRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAutoAdjustCameraClippingRangeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAutoAdjustCameraClippingRangeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAutoAdjustCameraClippingRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AutoAdjustCameraClippingRangeOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AutoAdjustCameraClippingRangeOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FindPokedRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseTimers(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseTimers(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseTimersOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseTimersOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHandleObservers(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHandleObservers(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HandleObserversOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HandleObserversOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnMouseMove(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnLeftButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnLeftButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnMiddleButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnMiddleButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnRightButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnRightButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnMouseWheelForward(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnMouseWheelBackward(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnChar(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnKeyDown(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnKeyUp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnKeyPress(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnKeyRelease(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnExpose(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnConfigure(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnEnter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnLeave(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnTimer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Rotate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Spin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Pan(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Dolly(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Zoom(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UniformScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StartState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StopState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StartAnimate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StopAnimate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StartRotate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EndRotate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StartZoom(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EndZoom(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StartPan(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EndPan(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StartSpin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EndSpin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StartDolly(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EndDolly(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StartUniformScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EndUniformScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StartTimer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EndTimer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HighlightProp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HighlightProp3D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPickColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMouseWheelMotionFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMouseWheelMotionFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
