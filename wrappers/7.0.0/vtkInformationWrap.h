/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKINFORMATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKINFORMATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkInformation.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkInformationWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkInformationWrap(vtkSmartPointer<vtkInformation>);
		VtkInformationWrap();
		~VtkInformationWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void Append(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AppendUnique(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Clear(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Copy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CopyEntries(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CopyEntry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Get(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetKey(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfKeys(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRequest(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Has(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Length(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Modified(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Remove(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Set(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRequest(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKINFORMATIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKINFORMATIONWRAP_CLASSDEF
#endif
};

#endif
