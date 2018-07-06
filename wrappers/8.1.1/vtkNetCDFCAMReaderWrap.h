/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKNETCDFCAMREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKNETCDFCAMREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkNetCDFCAMReader.h>

#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkNetCDFCAMReaderWrap : public VtkUnstructuredGridAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkNetCDFCAMReaderWrap(vtkSmartPointer<vtkNetCDFCAMReader>);
		VtkNetCDFCAMReaderWrap();
		~VtkNetCDFCAMReaderWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CanReadFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DisableAllPointArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EnableAllPointArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetConnectivityFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInterfaceLayerIndex(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInterfaceLayersRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMidpointLayerIndex(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMidpointLayersRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPointArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSingleInterfaceLayer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSingleMidpointLayer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVerticalDimension(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVerticalDimensionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVerticalDimensionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetConnectivityFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterfaceLayerIndex(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMidpointLayerIndex(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPointArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSingleInterfaceLayer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSingleMidpointLayer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVerticalDimension(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SingleInterfaceLayerOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SingleInterfaceLayerOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SingleMidpointLayerOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SingleMidpointLayerOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKNETCDFCAMREADERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKNETCDFCAMREADERWRAP_CLASSDEF
#endif
};

#endif
