/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKEXTRACTCTHPARTWRAP_H
#define NATIVE_EXTENSION_VTK_VTKEXTRACTCTHPARTWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkExtractCTHPart.h>

#include "vtkMultiBlockDataSetAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkExtractCTHPartWrap : public VtkMultiBlockDataSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkExtractCTHPartWrap(vtkSmartPointer<vtkExtractCTHPart>);
		VtkExtractCTHPartWrap();
		~VtkExtractCTHPartWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddVolumeArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CappingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CappingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateTrianglesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateTrianglesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCapping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClipPlane(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetController(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGenerateTriangles(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfVolumeArrayNames(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRemoveGhostCells(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVolumeArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVolumeFractionSurfaceValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVolumeFractionSurfaceValueMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVolumeFractionSurfaceValueMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveGhostCellsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveGhostCellsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveVolumeArrayNames(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCapping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetClipPlane(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetController(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGenerateTriangles(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRemoveGhostCells(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVolumeFractionSurfaceValue(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKEXTRACTCTHPARTWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKEXTRACTCTHPARTWRAP_CLASSDEF
#endif
};

#endif
