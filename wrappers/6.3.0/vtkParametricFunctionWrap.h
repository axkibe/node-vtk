/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPARAMETRICFUNCTIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPARAMETRICFUNCTIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkParametricFunction.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkParametricFunctionWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkParametricFunctionWrap(vtkSmartPointer<vtkParametricFunction>);
		VtkParametricFunctionWrap();
		~VtkParametricFunctionWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ClockwiseOrderingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ClockwiseOrderingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DerivativesAvailableOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DerivativesAvailableOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClockwiseOrdering(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClockwiseOrderingMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClockwiseOrderingMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDerivativesAvailable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDerivativesAvailableMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDerivativesAvailableMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetJoinU(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetJoinUMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetJoinUMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetJoinV(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetJoinVMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetJoinVMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetJoinW(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetJoinWMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetJoinWMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumU(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumV(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumW(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinimumU(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinimumV(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinimumW(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTwistU(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTwistUMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTwistUMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTwistV(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTwistVMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTwistVMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTwistW(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTwistWMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTwistWMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void JoinUOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void JoinUOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void JoinVOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void JoinVOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void JoinWOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void JoinWOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetClockwiseOrdering(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDerivativesAvailable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetJoinU(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetJoinV(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetJoinW(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumU(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumV(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumW(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMinimumU(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMinimumV(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMinimumW(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTwistU(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTwistV(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTwistW(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TwistUOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TwistUOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TwistVOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TwistVOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TwistWOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TwistWOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKPARAMETRICFUNCTIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKPARAMETRICFUNCTIONWRAP_CLASSDEF
#endif
};

#endif
