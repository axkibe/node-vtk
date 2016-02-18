/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSPATIALREPRESENTATIONFILTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSPATIALREPRESENTATIONFILTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkSpatialRepresentationFilter.h>

#include "vtkMultiBlockDataSetAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkSpatialRepresentationFilterWrap : public VtkMultiBlockDataSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkSpatialRepresentationFilterWrap(vtkSmartPointer<vtkSpatialRepresentationFilter>);
		VtkSpatialRepresentationFilterWrap();
		~VtkSpatialRepresentationFilterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateLeavesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateLeavesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGenerateLeaves(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSpatialRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ResetLevels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGenerateLeaves(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSpatialRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKSPATIALREPRESENTATIONFILTERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKSPATIALREPRESENTATIONFILTERWRAP_CLASSDEF
#endif
};

#endif
