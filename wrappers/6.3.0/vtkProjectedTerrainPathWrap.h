/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPROJECTEDTERRAINPATHWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPROJECTEDTERRAINPATHWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkProjectedTerrainPath.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkProjectedTerrainPathWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkProjectedTerrainPathWrap(vtkSmartPointer<vtkProjectedTerrainPath>);
		VtkProjectedTerrainPathWrap();
		~VtkProjectedTerrainPathWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHeightOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHeightTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHeightToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHeightToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProjectionMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProjectionModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProjectionModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSource(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHeightOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHeightTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProjectionMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProjectionModeToHug(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProjectionModeToNonOccluded(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProjectionModeToSimple(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSourceConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSourceData(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKPROJECTEDTERRAINPATHWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKPROJECTEDTERRAINPATHWRAP_CLASSDEF
#endif
};

#endif
