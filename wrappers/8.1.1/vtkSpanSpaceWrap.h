/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSPANSPACEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSPANSPACEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkSpanSpace.h>

#include "vtkScalarTreeWrap.h"
#include "../../plus/plus.h"

class VtkSpanSpaceWrap : public VtkScalarTreeWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkSpanSpaceWrap(vtkSmartPointer<vtkSpanSpace>);
		VtkSpanSpaceWrap();
		~VtkSpanSpaceWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BuildTree(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InitTraversal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKSPANSPACEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKSPANSPACEWRAP_CLASSDEF
#endif
};

#endif
