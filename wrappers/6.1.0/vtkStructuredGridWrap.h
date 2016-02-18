/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSTRUCTUREDGRIDWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSTRUCTUREDGRIDWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkStructuredGrid.h>

#include "vtkPointSetWrap.h"
#include "../../plus/plus.h"

class VtkStructuredGridWrap : public VtkPointSetWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkStructuredGridWrap(vtkSmartPointer<vtkStructuredGrid>);
		VtkStructuredGridWrap();
		~VtkStructuredGridWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CopyStructure(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellBlanking(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellDims(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellVisibilityArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataDimension(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataObjectType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetExtentType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaxCellSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointBlanking(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointVisibilityArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCellVisibilityArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPointVisibilityArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKSTRUCTUREDGRIDWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKSTRUCTUREDGRIDWRAP_CLASSDEF
#endif
};

#endif
