/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKINFORMATIONKEYLOOKUPWRAP_H
#define NATIVE_EXTENSION_VTK_VTKINFORMATIONKEYLOOKUPWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkInformationKeyLookup.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkInformationKeyLookupWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkInformationKeyLookupWrap(vtkSmartPointer<vtkInformationKeyLookup>);
		VtkInformationKeyLookupWrap();
		~VtkInformationKeyLookupWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKINFORMATIONKEYLOOKUPWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKINFORMATIONKEYLOOKUPWRAP_CLASSDEF
#endif
};

#endif
