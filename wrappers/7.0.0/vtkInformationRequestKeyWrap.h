/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKINFORMATIONREQUESTKEYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKINFORMATIONREQUESTKEYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkInformationRequestKey.h>

#include "vtkInformationKeyWrap.h"
#include "../../plus/plus.h"

class VtkInformationRequestKeyWrap : public VtkInformationKeyWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkInformationRequestKeyWrap(vtkSmartPointer<vtkInformationRequestKey>);
		VtkInformationRequestKeyWrap();
		~VtkInformationRequestKeyWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Has(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MakeKey(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Remove(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Set(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKINFORMATIONREQUESTKEYWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKINFORMATIONREQUESTKEYWRAP_CLASSDEF
#endif
};

#endif
