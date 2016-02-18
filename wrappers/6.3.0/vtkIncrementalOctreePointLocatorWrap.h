/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKINCREMENTALOCTREEPOINTLOCATORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKINCREMENTALOCTREEPOINTLOCATORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkIncrementalOctreePointLocator.h>

#include "vtkIncrementalPointLocatorWrap.h"
#include "../../plus/plus.h"

class VtkIncrementalOctreePointLocatorWrap : public VtkIncrementalPointLocatorWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkIncrementalOctreePointLocatorWrap(vtkSmartPointer<vtkIncrementalOctreePointLocator>);
		VtkIncrementalOctreePointLocatorWrap();
		~VtkIncrementalOctreePointLocatorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BuildCubicOctreeOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BuildCubicOctreeOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BuildLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FindClosestNPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FindPointsWithinRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FindPointsWithinSquaredRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FreeSearchStructure(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBuildCubicOctree(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLocatorPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaxPointsPerLeaf(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaxPointsPerLeafMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaxPointsPerLeafMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InitPointInsertion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBuildCubicOctree(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaxPointsPerLeaf(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKINCREMENTALOCTREEPOINTLOCATORWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKINCREMENTALOCTREEPOINTLOCATORWRAP_CLASSDEF
#endif
};

#endif
