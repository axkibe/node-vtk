/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKINFORMATIONSTRINGVECTORKEYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKINFORMATIONSTRINGVECTORKEYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkInformationStringVectorKey.h>

#include "vtkInformationKeyWrap.h"
#include "../../plus/plus.h"

class VtkInformationStringVectorKeyWrap : public VtkInformationKeyWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkInformationStringVectorKeyWrap(vtkSmartPointer<vtkInformationStringVectorKey>);
		VtkInformationStringVectorKeyWrap();
		~VtkInformationStringVectorKeyWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void Append(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Get(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Length(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MakeKey(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Set(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKINFORMATIONSTRINGVECTORKEYWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKINFORMATIONSTRINGVECTORKEYWRAP_CLASSDEF
#endif
};

#endif
