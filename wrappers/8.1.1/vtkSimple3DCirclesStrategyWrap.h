/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSIMPLE3DCIRCLESSTRATEGYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSIMPLE3DCIRCLESSTRATEGYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkSimple3DCirclesStrategy.h>

#include "vtkGraphLayoutStrategyWrap.h"
#include "../../plus/plus.h"

class VtkSimple3DCirclesStrategyWrap : public VtkGraphLayoutStrategyWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkSimple3DCirclesStrategyWrap(vtkSmartPointer<vtkSimple3DCirclesStrategy>);
		VtkSimple3DCirclesStrategyWrap();
		~VtkSimple3DCirclesStrategyWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AutoHeightOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AutoHeightOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ForceToUseUniversalStartPointsFinderOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ForceToUseUniversalStartPointsFinderOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAutoHeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDirection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetForceToUseUniversalStartPointsFinder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHierarchicalLayers(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHierarchicalOrder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMarkedStartVertices(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMethod(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinimumDegree(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinimumRadian(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Layout(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAutoHeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDirection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetForceToUseUniversalStartPointsFinder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGraph(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHierarchicalLayers(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHierarchicalOrder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMarkedStartVertices(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMethod(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMinimumDegree(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMinimumRadian(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKSIMPLE3DCIRCLESSTRATEGYWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKSIMPLE3DCIRCLESSTRATEGYWRAP_CLASSDEF
#endif
};

#endif
