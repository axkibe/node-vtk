/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKDATAARRAYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKDATAARRAYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkDataArray.h>

#include "vtkAbstractArrayWrap.h"
#include "../../plus/plus.h"

class VtkDataArrayWrap : public VtkAbstractArrayWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkDataArrayWrap(vtkSmartPointer<vtkDataArray>);
		VtkDataArrayWrap();
		~VtkDataArrayWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void COMPONENT_RANGE(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CopyComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CopyInformation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CreateDataArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CreateDefaultLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FastDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FillComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActualMemorySize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetArrayType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataTypeMax(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataTypeMin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataTypeRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetElementComponentSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaxNorm(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTuples(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InsertNextTuple1(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InsertNextTuple2(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InsertNextTuple3(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InsertNextTuple4(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InsertNextTuple6(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InsertNextTuple9(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsNumeric(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void L2_NORM_RANGE(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKDATAARRAYWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKDATAARRAYWRAP_CLASSDEF
#endif
};

#endif
