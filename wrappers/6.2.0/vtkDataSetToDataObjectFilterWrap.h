/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKDATASETTODATAOBJECTFILTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKDATASETTODATAOBJECTFILTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkDataSetToDataObjectFilter.h>

#include "vtkDataObjectAlgorithmWrap.h"

class VtkDataSetToDataObjectFilterWrap : public VtkDataObjectAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkDataSetToDataObjectFilterWrap(vtkSmartPointer<vtkDataSetToDataObjectFilter>);
		VtkDataSetToDataObjectFilterWrap();
		~VtkDataSetToDataObjectFilterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CellDataOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CellDataOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FieldDataOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FieldDataOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GeometryOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GeometryOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFieldData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTopology(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PointDataOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PointDataOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCellData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFieldData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPointData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTopology(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TopologyOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TopologyOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
