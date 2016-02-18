/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKFEATUREEDGESWRAP_H
#define NATIVE_EXTENSION_VTK_VTKFEATUREEDGESWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkFeatureEdges.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkFeatureEdgesWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkFeatureEdgesWrap(vtkSmartPointer<vtkFeatureEdges>);
		VtkFeatureEdgesWrap();
		~VtkFeatureEdgesWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BoundaryEdgesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BoundaryEdgesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ColoringOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ColoringOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CreateDefaultLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FeatureEdgesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FeatureEdgesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBoundaryEdges(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetColoring(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFeatureAngle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFeatureAngleMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFeatureAngleMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFeatureEdges(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetManifoldEdges(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNonManifoldEdges(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ManifoldEdgesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ManifoldEdgesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NonManifoldEdgesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NonManifoldEdgesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBoundaryEdges(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColoring(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFeatureAngle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFeatureEdges(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetManifoldEdges(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNonManifoldEdges(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKFEATUREEDGESWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKFEATUREEDGESWRAP_CLASSDEF
#endif
};

#endif
