/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSTRINGARRAYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSTRINGARRAYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkStringArray.h>

#include "vtkAbstractArrayWrap.h"
#include "../../plus/plus.h"

class VtkStringArrayWrap : public VtkAbstractArrayWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkStringArrayWrap(vtkSmartPointer<vtkStringArray>);
		VtkStringArrayWrap();
		~VtkStringArrayWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ClearLookup(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DataChanged(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActualMemorySize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataTypeSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetElementComponentSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfElementComponents(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTuples(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InsertTuples(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsNumeric(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LookupValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewIterator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Squeeze(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKSTRINGARRAYWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKSTRINGARRAYWRAP_CLASSDEF
#endif
};

#endif
