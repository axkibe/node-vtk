/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKBINCELLDATAFILTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKBINCELLDATAFILTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkBinCellDataFilter.h>

#include "vtkDataSetAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkBinCellDataFilterWrap : public VtkDataSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkBinCellDataFilterWrap(vtkSmartPointer<vtkBinCellDataFilter>);
		VtkBinCellDataFilterWrap();
		~VtkBinCellDataFilterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ComputeToleranceOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeToleranceOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateValues(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellOverlapMethod(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellOverlapMethodMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellOverlapMethodMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComputeTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfBins(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfNonzeroBinsArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSource(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSpatialMatch(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStoreNumberOfNonzeroBins(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCellLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCellOverlapMethod(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetComputeTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfBins(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfNonzeroBinsArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSourceConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSourceData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSpatialMatch(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStoreNumberOfNonzeroBins(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SpatialMatchOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SpatialMatchOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StoreNumberOfNonzeroBinsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StoreNumberOfNonzeroBinsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKBINCELLDATAFILTERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKBINCELLDATAFILTERWRAP_CLASSDEF
#endif
};

#endif