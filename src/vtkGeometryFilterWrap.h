/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGEOMETRYFILTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGEOMETRYFILTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGeometryFilter.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkGeometryFilterWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkGeometryFilterWrap(vtkSmartPointer<vtkGeometryFilter>);
		VtkGeometryFilterWrap();
		~VtkGeometryFilterWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CellClippingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CellClippingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CreateDefaultLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ExtentClippingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ExtentClippingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellClipping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetExtentClipping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
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
};

#endif
