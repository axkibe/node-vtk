/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGENERICVERTEXATTRIBUTEMAPPINGWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGENERICVERTEXATTRIBUTEMAPPINGWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGenericVertexAttributeMapping.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkGenericVertexAttributeMappingWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkGenericVertexAttributeMappingWrap(vtkSmartPointer<vtkGenericVertexAttributeMapping>);
		VtkGenericVertexAttributeMappingWrap();
		~VtkGenericVertexAttributeMappingWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddMapping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAttributeName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFieldAssociation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfMappings(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextureUnit(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveAllMappings(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveMapping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKGENERICVERTEXATTRIBUTEMAPPINGWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKGENERICVERTEXATTRIBUTEMAPPINGWRAP_CLASSDEF
#endif
};

#endif
