/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTREEMAPLAYOUTWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTREEMAPLAYOUTWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTreeMapLayout.h>

#include "vtkTreeAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkTreeMapLayoutWrap : public VtkTreeAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkTreeMapLayoutWrap(vtkSmartPointer<vtkTreeMapLayout>);
		VtkTreeMapLayoutWrap();
		~VtkTreeMapLayoutWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLayoutStrategy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRectanglesFieldName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLayoutStrategy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRectanglesFieldName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSizeArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKTREEMAPLAYOUTWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKTREEMAPLAYOUTWRAP_CLASSDEF
#endif
};

#endif
