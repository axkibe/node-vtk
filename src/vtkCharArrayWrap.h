/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCHARARRAYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCHARARRAYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCharArray.h>

#include "vtkDataArrayWrap.h"

class VtkCharArrayWrap : public VtkDataArrayWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkCharArrayWrap(vtkSmartPointer<vtkCharArray>);
		VtkCharArrayWrap();
		~VtkCharArrayWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataTypeValueMax(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataTypeValueMin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
