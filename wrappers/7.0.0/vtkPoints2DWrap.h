/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPOINTS2DWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPOINTS2DWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPoints2D.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkPoints2DWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPoints2DWrap(vtkSmartPointer<vtkPoints2D>);
		VtkPoints2DWrap();
		~VtkPoints2DWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ComputeBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActualMemorySize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Reset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataTypeToBit(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataTypeToChar(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataTypeToDouble(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataTypeToFloat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataTypeToInt(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataTypeToLong(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataTypeToShort(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataTypeToUnsignedChar(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataTypeToUnsignedInt(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataTypeToUnsignedLong(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataTypeToUnsignedShort(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Squeeze(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKPOINTS2DWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKPOINTS2DWRAP_CLASSDEF
#endif
};

#endif
