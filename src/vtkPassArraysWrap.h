/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPASSARRAYSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPASSARRAYSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPassArrays.h>

#include "vtkDataObjectAlgorithmWrap.h"

class VtkPassArraysWrap : public VtkDataObjectAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkPassArraysWrap(vtkSmartPointer<vtkPassArrays>);
		VtkPassArraysWrap();
		~VtkPassArraysWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AddCellDataArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AddFieldDataArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AddFieldType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AddPointDataArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ClearArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ClearCellDataArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ClearFieldDataArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ClearFieldTypes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ClearPointDataArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveArraysOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveArraysOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveCellDataArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveFieldDataArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemovePointDataArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseFieldTypesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseFieldTypesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
