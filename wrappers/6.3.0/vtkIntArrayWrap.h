/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKINTARRAYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKINTARRAYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkIntArray.h>

#include "vtkDataArrayWrap.h"

class VtkIntArrayWrap : public VtkDataArrayWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkIntArrayWrap(vtkSmartPointer<vtkIntArray>);
		VtkIntArrayWrap();
		~VtkIntArrayWrap( );
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
};

#endif
