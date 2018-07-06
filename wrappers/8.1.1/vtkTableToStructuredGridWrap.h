/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTABLETOSTRUCTUREDGRIDWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTABLETOSTRUCTUREDGRIDWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTableToStructuredGrid.h>

#include "vtkStructuredGridAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkTableToStructuredGridWrap : public VtkStructuredGridAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkTableToStructuredGridWrap(vtkSmartPointer<vtkTableToStructuredGrid>);
		VtkTableToStructuredGridWrap();
		~VtkTableToStructuredGridWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXColumn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXComponentMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXComponentMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYColumn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYComponentMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYComponentMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZColumn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZComponentMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZComponentMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXColumn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetYColumn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetYComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetZColumn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetZComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKTABLETOSTRUCTUREDGRIDWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKTABLETOSTRUCTUREDGRIDWRAP_CLASSDEF
#endif
};

#endif
