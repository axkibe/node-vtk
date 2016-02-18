/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKRECTILINEARGRIDWRAP_H
#define NATIVE_EXTENSION_VTK_VTKRECTILINEARGRIDWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkRectilinearGrid.h>

#include "vtkDataSetWrap.h"
#include "../../plus/plus.h"

class VtkRectilinearGridWrap : public VtkDataSetWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkRectilinearGridWrap(vtkSmartPointer<vtkRectilinearGrid>);
		VtkRectilinearGridWrap();
		~VtkRectilinearGridWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ComputeBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeStructuredCoordinates(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CopyStructure(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataDimension(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataObjectType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetExtentType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaxCellSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXCoordinates(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYCoordinates(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZCoordinates(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXCoordinates(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetYCoordinates(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetZCoordinates(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKRECTILINEARGRIDWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKRECTILINEARGRIDWRAP_CLASSDEF
#endif
};

#endif
