/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSCALARTREEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSCALARTREEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkScalarTree.h>

#include "vtkObjectWrap.h"

class VtkScalarTreeWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkScalarTreeWrap(vtkSmartPointer<vtkScalarTree>);
		VtkScalarTreeWrap();
		~VtkScalarTreeWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataSet(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataSet(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
