/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKOVERRIDEINFORMATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKOVERRIDEINFORMATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkOverrideInformation.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkOverrideInformationWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkOverrideInformationWrap(vtkSmartPointer<vtkOverrideInformation>);
		VtkOverrideInformationWrap();
		~VtkOverrideInformationWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassOverrideName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassOverrideWithName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDescription(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetObjectFactory(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetClassOverrideName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetClassOverrideWithName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDescription(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKOVERRIDEINFORMATIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKOVERRIDEINFORMATIONWRAP_CLASSDEF
#endif
};

#endif
