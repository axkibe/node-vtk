/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKEXTRACTUNSTRUCTUREDGRIDWRAP_H
#define NATIVE_EXTENSION_VTK_VTKEXTRACTUNSTRUCTUREDGRIDWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkExtractUnstructuredGrid.h>

#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkExtractUnstructuredGridWrap : public VtkUnstructuredGridAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkExtractUnstructuredGridWrap(vtkSmartPointer<vtkExtractUnstructuredGrid>);
		VtkExtractUnstructuredGridWrap();
		~VtkExtractUnstructuredGridWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CellClippingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CellClippingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CreateDefaultLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ExtentClippingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ExtentClippingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellClipping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetExtentClipping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMerging(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointClipping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MergingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MergingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PointClippingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PointClippingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCellClipping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetExtentClipping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMerging(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPointClipping(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKEXTRACTUNSTRUCTUREDGRIDWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKEXTRACTUNSTRUCTUREDGRIDWRAP_CLASSDEF
#endif
};

#endif
