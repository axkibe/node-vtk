/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKBITARRAYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKBITARRAYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkBitArray.h>

#include "vtkDataArrayWrap.h"
#include "../../plus/plus.h"

class VtkBitArrayWrap : public VtkDataArrayWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkBitArrayWrap(vtkSmartPointer<vtkBitArray>);
		VtkBitArrayWrap();
		~VtkBitArrayWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ClearLookup(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DataChanged(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataTypeSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InsertTuples(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LookupValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewIterator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveFirstTuple(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveLastTuple(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Squeeze(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKBITARRAYWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKBITARRAYWRAP_CLASSDEF
#endif
};

#endif
