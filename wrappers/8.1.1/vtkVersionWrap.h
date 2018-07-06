/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKVERSIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKVERSIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkVersion.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkVersionWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkVersionWrap(vtkSmartPointer<vtkVersion>);
		VtkVersionWrap();
		~VtkVersionWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetVTKBuildVersion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVTKMajorVersion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVTKMinorVersion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVTKSourceVersion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVTKVersion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKVERSIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKVERSIONWRAP_CLASSDEF
#endif
};

#endif