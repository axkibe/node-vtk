/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCOMPUTEHISTOGRAM2DOUTLIERSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCOMPUTEHISTOGRAM2DOUTLIERSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkComputeHistogram2DOutliers.h>

#include "vtkSelectionAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkComputeHistogram2DOutliersWrap : public VtkSelectionAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkComputeHistogram2DOutliersWrap(vtkSmartPointer<vtkComputeHistogram2DOutliers>);
		VtkComputeHistogram2DOutliersWrap();
		~VtkComputeHistogram2DOutliersWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputTable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPreferredNumberOfOutliers(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputHistogramImageDataConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputHistogramMultiBlockConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputTableConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPreferredNumberOfOutliers(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCOMPUTEHISTOGRAM2DOUTLIERSWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCOMPUTEHISTOGRAM2DOUTLIERSWRAP_CLASSDEF
#endif
};

#endif
