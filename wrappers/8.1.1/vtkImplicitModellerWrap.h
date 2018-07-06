/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMPLICITMODELLERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMPLICITMODELLERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImplicitModeller.h>

#include "vtkImageAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkImplicitModellerWrap : public VtkImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImplicitModellerWrap(vtkSmartPointer<vtkImplicitModeller>);
		VtkImplicitModellerWrap();
		~VtkImplicitModellerWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AdjustBoundsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AdjustBoundsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Append(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CappingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CappingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeModelBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EndAppend(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAdjustBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAdjustDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAdjustDistanceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAdjustDistanceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCapValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCapping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLocatorMaxLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumDistanceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumDistanceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetModelBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfThreads(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfThreadsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfThreadsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProcessMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProcessModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProcessModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProcessModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSampleDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScaleToMaximumDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ScaleToMaximumDistanceOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ScaleToMaximumDistanceOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAdjustBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAdjustDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCapValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCapping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLocatorMaxLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetModelBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfThreads(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarTypeToChar(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarTypeToDouble(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarTypeToFloat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarTypeToInt(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarTypeToLong(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarTypeToShort(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarTypeToUnsignedChar(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarTypeToUnsignedInt(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarTypeToUnsignedLong(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarTypeToUnsignedShort(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProcessMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProcessModeToPerCell(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProcessModeToPerVoxel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSampleDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScaleToMaximumDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StartAppend(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKIMPLICITMODELLERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKIMPLICITMODELLERWRAP_CLASSDEF
#endif
};

#endif