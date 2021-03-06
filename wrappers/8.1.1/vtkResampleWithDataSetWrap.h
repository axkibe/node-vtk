/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKRESAMPLEWITHDATASETWRAP_H
#define NATIVE_EXTENSION_VTK_VTKRESAMPLEWITHDATASETWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkResampleWithDataSet.h>

#include "vtkPassInputTypeAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkResampleWithDataSetWrap : public VtkPassInputTypeAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkResampleWithDataSetWrap(vtkSmartPointer<vtkResampleWithDataSet>);
		VtkResampleWithDataSetWrap();
		~VtkResampleWithDataSetWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ComputeToleranceOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeToleranceOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCategoricalData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComputeTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMarkBlankPointsAndCells(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPassCellArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPassFieldArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPassPointArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MarkBlankPointsAndCellsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MarkBlankPointsAndCellsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PassCellArraysOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PassCellArraysOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PassFieldArraysOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PassFieldArraysOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PassPointArraysOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PassPointArraysOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCategoricalData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetComputeTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMarkBlankPointsAndCells(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPassCellArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPassFieldArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPassPointArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSourceConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSourceData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKRESAMPLEWITHDATASETWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKRESAMPLEWITHDATASETWRAP_CLASSDEF
#endif
};

#endif
