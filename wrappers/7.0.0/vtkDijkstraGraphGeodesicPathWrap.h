/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKDIJKSTRAGRAPHGEODESICPATHWRAP_H
#define NATIVE_EXTENSION_VTK_VTKDIJKSTRAGRAPHGEODESICPATHWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkDijkstraGraphGeodesicPath.h>

#include "vtkGraphGeodesicPathWrap.h"
#include "../../plus/plus.h"

class VtkDijkstraGraphGeodesicPathWrap : public VtkGraphGeodesicPathWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkDijkstraGraphGeodesicPathWrap(vtkSmartPointer<vtkDijkstraGraphGeodesicPath>);
		VtkDijkstraGraphGeodesicPathWrap();
		~VtkDijkstraGraphGeodesicPathWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCumulativeWeights(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIdList(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRepelPathFromVertices(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRepelVertices(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStopWhenEndReached(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseScalarWeights(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RepelPathFromVerticesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RepelPathFromVerticesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRepelPathFromVertices(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRepelVertices(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStopWhenEndReached(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseScalarWeights(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StopWhenEndReachedOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StopWhenEndReachedOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseScalarWeightsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseScalarWeightsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKDIJKSTRAGRAPHGEODESICPATHWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKDIJKSTRAGRAPHGEODESICPATHWRAP_CLASSDEF
#endif
};

#endif
