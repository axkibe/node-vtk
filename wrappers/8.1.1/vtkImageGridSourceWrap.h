/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGEGRIDSOURCEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGEGRIDSOURCEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageGridSource.h>

#include "vtkImageAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkImageGridSourceWrap : public VtkImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageGridSourceWrap(vtkSmartPointer<vtkImageGridSource>);
		VtkImageGridSourceWrap();
		~VtkImageGridSourceWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetDataExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataScalarTypeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFillValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGridOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGridSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLineValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataScalarTypeToDouble(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataScalarTypeToInt(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataScalarTypeToShort(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataScalarTypeToUnsignedChar(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataScalarTypeToUnsignedShort(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFillValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGridOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGridSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLineValue(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKIMAGEGRIDSOURCEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKIMAGEGRIDSOURCEWRAP_CLASSDEF
#endif
};

#endif
