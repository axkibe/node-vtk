/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSUPERQUADRICWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSUPERQUADRICWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkSuperquadric.h>

#include "vtkImplicitFunctionWrap.h"
#include "../../plus/plus.h"

class VtkSuperquadricWrap : public VtkImplicitFunctionWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkSuperquadricWrap(vtkSmartPointer<vtkSuperquadric>);
		VtkSuperquadricWrap();
		~VtkSuperquadricWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void EvaluateFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EvaluateGradient(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPhiRoundness(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetThetaRoundness(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetThickness(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetThicknessMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetThicknessMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetToroidal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPhiRoundness(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetThetaRoundness(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetThickness(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetToroidal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ToroidalOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ToroidalOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKSUPERQUADRICWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKSUPERQUADRICWRAP_CLASSDEF
#endif
};

#endif