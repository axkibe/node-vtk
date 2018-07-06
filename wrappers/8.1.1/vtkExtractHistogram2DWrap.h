/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKEXTRACTHISTOGRAM2DWRAP_H
#define NATIVE_EXTENSION_VTK_VTKEXTRACTHISTOGRAM2DWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkExtractHistogram2D.h>

#include "vtkStatisticsAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkExtractHistogram2DWrap : public VtkStatisticsAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkExtractHistogram2DWrap(vtkSmartPointer<vtkExtractHistogram2D>);
		VtkExtractHistogram2DWrap();
		~VtkExtractHistogram2DWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void Aggregate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBinWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComponentsToProcess(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCustomHistogramExtents(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumBinCount(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfBins(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputHistogramImage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRowMask(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSwapColumns(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseCustomHistogramExtents(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetComponentsToProcess(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCustomHistogramExtents(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfBins(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRowMask(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarTypeToDouble(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarTypeToFloat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarTypeToUnsignedChar(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarTypeToUnsignedInt(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarTypeToUnsignedLong(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarTypeToUnsignedShort(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSwapColumns(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseCustomHistogramExtents(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SwapColumnsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SwapColumnsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseCustomHistogramExtentsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseCustomHistogramExtentsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKEXTRACTHISTOGRAM2DWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKEXTRACTHISTOGRAM2DWRAP_CLASSDEF
#endif
};

#endif
