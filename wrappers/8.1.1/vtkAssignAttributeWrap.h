/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKASSIGNATTRIBUTEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKASSIGNATTRIBUTEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAssignAttribute.h>

#include "vtkPassInputTypeAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkAssignAttributeWrap : public VtkPassInputTypeAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkAssignAttributeWrap(vtkSmartPointer<vtkAssignAttribute>);
		VtkAssignAttributeWrap();
		~VtkAssignAttributeWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void Assign(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKASSIGNATTRIBUTEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKASSIGNATTRIBUTEWRAP_CLASSDEF
#endif
};

#endif
