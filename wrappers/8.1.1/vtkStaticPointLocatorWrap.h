/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSTATICPOINTLOCATORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSTATICPOINTLOCATORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkStaticPointLocator.h>

#include "vtkAbstractPointLocatorWrap.h"
#include "../../plus/plus.h"

class VtkStaticPointLocatorWrap : public VtkAbstractPointLocatorWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkStaticPointLocatorWrap(vtkSmartPointer<vtkStaticPointLocator>);
		VtkStaticPointLocatorWrap();
		~VtkStaticPointLocatorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BuildLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FindClosestNPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FindPointsWithinRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FreeSearchStructure(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDivisions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLargeIds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPointsPerBucket(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPointsPerBucketMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPointsPerBucketMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDivisions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfPointsPerBucket(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKSTATICPOINTLOCATORWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKSTATICPOINTLOCATORWRAP_CLASSDEF
#endif
};

#endif