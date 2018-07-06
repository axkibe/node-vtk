/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTEMPORALINTERPOLATEDVELOCITYFIELDWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTEMPORALINTERPOLATEDVELOCITYFIELDWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTemporalInterpolatedVelocityField.h>

#include "vtkFunctionSetWrap.h"
#include "../../plus/plus.h"

class VtkTemporalInterpolatedVelocityFieldWrap : public VtkFunctionSetWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkTemporalInterpolatedVelocityFieldWrap(vtkSmartPointer<vtkTemporalInterpolatedVelocityField>);
		VtkTemporalInterpolatedVelocityFieldWrap();
		~VtkTemporalInterpolatedVelocityFieldWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AdvanceOneTimeStep(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ClearCache(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCurrentWeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLastGoodVelocity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsStatic(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SelectVectors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataSetAtTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShowCacheResults(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKTEMPORALINTERPOLATEDVELOCITYFIELDWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKTEMPORALINTERPOLATEDVELOCITYFIELDWRAP_CLASSDEF
#endif
};

#endif
