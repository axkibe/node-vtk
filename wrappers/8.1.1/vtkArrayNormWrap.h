/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKARRAYNORMWRAP_H
#define NATIVE_EXTENSION_VTK_VTKARRAYNORMWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkArrayNorm.h>

#include "vtkArrayDataAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkArrayNormWrap : public VtkArrayDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkArrayNormWrap(vtkSmartPointer<vtkArrayNorm>);
		VtkArrayNormWrap();
		~VtkArrayNormWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetDimension(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInvert(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetL(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDimension(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInvert(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetL(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKARRAYNORMWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKARRAYNORMWRAP_CLASSDEF
#endif
};

#endif
