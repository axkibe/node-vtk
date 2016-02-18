/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTREELAYOUTSTRATEGYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTREELAYOUTSTRATEGYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTreeLayoutStrategy.h>

#include "vtkGraphLayoutStrategyWrap.h"
#include "../../plus/plus.h"

class VtkTreeLayoutStrategyWrap : public VtkGraphLayoutStrategyWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkTreeLayoutStrategyWrap(vtkSmartPointer<vtkTreeLayoutStrategy>);
		VtkTreeLayoutStrategyWrap();
		~VtkTreeLayoutStrategyWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetAngle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAngleMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAngleMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDistanceArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLeafSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLeafSpacingMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLeafSpacingMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLogSpacingValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRadial(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetReverseEdges(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRotation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Layout(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RadialOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RadialOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReverseEdgesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReverseEdgesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAngle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDistanceArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLeafSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLogSpacingValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRadial(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetReverseEdges(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRotation(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKTREELAYOUTSTRATEGYWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKTREELAYOUTSTRATEGYWRAP_CLASSDEF
#endif
};

#endif
