/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKINFORMATIONOBJECTBASEVECTORKEYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKINFORMATIONOBJECTBASEVECTORKEYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkInformationObjectBaseVectorKey.h>

#include "vtkInformationKeyWrap.h"
#include "../../plus/plus.h"

class VtkInformationObjectBaseVectorKeyWrap : public VtkInformationKeyWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkInformationObjectBaseVectorKeyWrap(vtkSmartPointer<vtkInformationObjectBaseVectorKey>);
		VtkInformationObjectBaseVectorKeyWrap();
		~VtkInformationObjectBaseVectorKeyWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void Append(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Clear(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Get(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Length(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MakeKey(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Resize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Set(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Size(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKINFORMATIONOBJECTBASEVECTORKEYWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKINFORMATIONOBJECTBASEVECTORKEYWRAP_CLASSDEF
#endif
};

#endif
