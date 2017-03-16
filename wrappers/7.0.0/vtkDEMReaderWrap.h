/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKDEMREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKDEMREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkDEMReader.h>

#include "vtkImageAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkDEMReaderWrap : public VtkImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkDEMReaderWrap(vtkSmartPointer<vtkDEMReader>);
		VtkDEMReaderWrap();
		~VtkDEMReaderWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetAccuracyCode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDEMLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetElevationBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetElevationPattern(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetElevationReference(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetElevationReferenceAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetElevationReferenceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetElevationReferenceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetElevationUnitOfMeasure(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGroundSystem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGroundZone(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLocalRotation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMapLabel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPlaneUnitOfMeasure(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPolygonSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProfileDimension(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProjectionParameters(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSpatialResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetElevationReference(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetElevationReferenceToElevationBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetElevationReferenceToSeaLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKDEMREADERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKDEMREADERWRAP_CLASSDEF
#endif
};

#endif
