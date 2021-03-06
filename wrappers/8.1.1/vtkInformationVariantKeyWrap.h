/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKINFORMATIONVARIANTKEYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKINFORMATIONVARIANTKEYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkInformationVariantKey.h>

#include "vtkInformationKeyWrap.h"
#include "../../plus/plus.h"

class VtkInformationVariantKeyWrap : public VtkInformationKeyWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkInformationVariantKeyWrap(vtkSmartPointer<vtkInformationVariantKey>);
		VtkInformationVariantKeyWrap();
		~VtkInformationVariantKeyWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void MakeKey(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKINFORMATIONVARIANTKEYWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKINFORMATIONVARIANTKEYWRAP_CLASSDEF
#endif
};

#endif
