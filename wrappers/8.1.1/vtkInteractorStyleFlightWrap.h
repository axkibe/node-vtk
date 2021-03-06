/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKINTERACTORSTYLEFLIGHTWRAP_H
#define NATIVE_EXTENSION_VTK_VTKINTERACTORSTYLEFLIGHTWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkInteractorStyleFlight.h>

#include "vtkInteractorStyleWrap.h"
#include "../../plus/plus.h"

class VtkInteractorStyleFlightWrap : public VtkInteractorStyleWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkInteractorStyleFlightWrap(vtkSmartPointer<vtkInteractorStyleFlight>);
		VtkInteractorStyleFlightWrap();
		~VtkInteractorStyleFlightWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void DisableMotionOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DisableMotionOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EndForwardFly(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EndReverseFly(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ForwardFly(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAngleAccelerationFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAngleStepSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDefaultUpVector(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDisableMotion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMotionAccelerationFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMotionStepSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRestoreUpVector(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void JumpTo(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnChar(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnKeyDown(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnKeyUp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnLeftButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnLeftButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnMiddleButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnMiddleButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnMouseMove(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnRightButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnRightButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnTimer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RestoreUpVectorOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RestoreUpVectorOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReverseFly(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAngleAccelerationFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAngleStepSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDefaultUpVector(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDisableMotion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMotionAccelerationFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMotionStepSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRestoreUpVector(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StartForwardFly(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StartReverseFly(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKINTERACTORSTYLEFLIGHTWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKINTERACTORSTYLEFLIGHTWRAP_CLASSDEF
#endif
};

#endif
