/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKINFORMATIONKEYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKINFORMATIONKEYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkInformationKey.h>

#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

class VtkInformationKeyWrap : public VtkObjectBaseWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkInformationKeyWrap(vtkSmartPointer<vtkInformationKey>);
		VtkInformationKeyWrap();
		~VtkInformationKeyWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CopyDefaultInformation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLocation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Has(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NeedToExecute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Print(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Remove(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Report(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StoreMetaData(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKINFORMATIONKEYWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKINFORMATIONKEYWRAP_CLASSDEF
#endif
};

#endif
