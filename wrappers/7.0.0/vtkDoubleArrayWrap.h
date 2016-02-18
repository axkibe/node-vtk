/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKDOUBLEARRAYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKDOUBLEARRAYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkDoubleArray.h>

#include "vtkDataArrayWrap.h"
#include "../../plus/plus.h"

class VtkDoubleArrayWrap : public VtkDataArrayWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkDoubleArrayWrap(vtkSmartPointer<vtkDoubleArray>);
		VtkDoubleArrayWrap();
		~VtkDoubleArrayWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataTypeValueMax(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataTypeValueMin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetValueRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKDOUBLEARRAYWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKDOUBLEARRAYWRAP_CLASSDEF
#endif
};

#endif
