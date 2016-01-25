/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKMAPARRAYVALUESWRAP_H
#define NATIVE_EXTENSION_VTK_VTKMAPARRAYVALUESWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkMapArrayValues.h>

#include "vtkPassInputTypeAlgorithmWrap.h"

class VtkMapArrayValuesWrap : public VtkPassInputTypeAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkMapArrayValuesWrap(vtkSmartPointer<vtkMapArrayValues>);
		VtkMapArrayValuesWrap();
		~VtkMapArrayValuesWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddToMap(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ClearMap(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFieldType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFillValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInputArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMapSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputArrayType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPassArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PassArrayOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PassArrayOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFieldType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFillValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputArrayType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPassArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
