/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKVOIDARRAYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKVOIDARRAYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkVoidArray.h>

#include "vtkObjectWrap.h"

class VtkVoidArrayWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkVoidArrayWrap(vtkSmartPointer<vtkVoidArray>);
		VtkVoidArrayWrap();
		~VtkVoidArrayWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataTypeSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Reset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Squeeze(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
