/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGETHRESHOLDCONNECTIVITYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGETHRESHOLDCONNECTIVITYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageThresholdConnectivity.h>

#include "vtkImageAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkImageThresholdConnectivityWrap : public VtkImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageThresholdConnectivityWrap(vtkSmartPointer<vtkImageThresholdConnectivity>);
		VtkImageThresholdConnectivityWrap();
		~VtkImageThresholdConnectivityWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetActiveComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLowerThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNeighborhoodFraction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNeighborhoodFractionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNeighborhoodFractionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNeighborhoodRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfInVoxels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetReplaceIn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetReplaceOut(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSeedPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSliceRangeX(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSliceRangeY(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSliceRangeZ(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStencil(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUpperThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReplaceInOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReplaceInOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReplaceOutOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReplaceOutOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetActiveComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNeighborhoodFraction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNeighborhoodRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetReplaceIn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetReplaceOut(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSeedPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSliceRangeX(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSliceRangeY(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSliceRangeZ(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStencilData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ThresholdBetween(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ThresholdByLower(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ThresholdByUpper(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKIMAGETHRESHOLDCONNECTIVITYWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKIMAGETHRESHOLDCONNECTIVITYWRAP_CLASSDEF
#endif
};

#endif
