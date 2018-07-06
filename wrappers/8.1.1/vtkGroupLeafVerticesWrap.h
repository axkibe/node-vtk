/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGROUPLEAFVERTICESWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGROUPLEAFVERTICESWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGroupLeafVertices.h>

#include "vtkTreeAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkGroupLeafVerticesWrap : public VtkTreeAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkGroupLeafVerticesWrap(vtkSmartPointer<vtkGroupLeafVertices>);
		VtkGroupLeafVerticesWrap();
		~VtkGroupLeafVerticesWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetGroupDomain(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGroupDomain(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKGROUPLEAFVERTICESWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKGROUPLEAFVERTICESWRAP_CLASSDEF
#endif
};

#endif
