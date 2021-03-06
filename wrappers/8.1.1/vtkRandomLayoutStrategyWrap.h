/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKRANDOMLAYOUTSTRATEGYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKRANDOMLAYOUTSTRATEGYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkRandomLayoutStrategy.h>

#include "vtkGraphLayoutStrategyWrap.h"
#include "../../plus/plus.h"

class VtkRandomLayoutStrategyWrap : public VtkGraphLayoutStrategyWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkRandomLayoutStrategyWrap(vtkSmartPointer<vtkRandomLayoutStrategy>);
		VtkRandomLayoutStrategyWrap();
		~VtkRandomLayoutStrategyWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AutomaticBoundsComputationOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AutomaticBoundsComputationOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAutomaticBoundsComputation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGraphBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRandomSeed(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRandomSeedMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRandomSeedMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetThreeDimensionalLayout(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Layout(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAutomaticBoundsComputation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGraph(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGraphBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRandomSeed(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetThreeDimensionalLayout(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ThreeDimensionalLayoutOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ThreeDimensionalLayoutOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKRANDOMLAYOUTSTRATEGYWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKRANDOMLAYOUTSTRATEGYWRAP_CLASSDEF
#endif
};

#endif
