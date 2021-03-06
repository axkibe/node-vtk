/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKMATRIXTOLINEARTRANSFORMWRAP_H
#define NATIVE_EXTENSION_VTK_VTKMATRIXTOLINEARTRANSFORMWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkMatrixToLinearTransform.h>

#include "vtkLinearTransformWrap.h"
#include "../../plus/plus.h"

class VtkMatrixToLinearTransformWrap : public VtkLinearTransformWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkMatrixToLinearTransformWrap(vtkSmartPointer<vtkMatrixToLinearTransform>);
		VtkMatrixToLinearTransformWrap();
		~VtkMatrixToLinearTransformWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Inverse(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MakeTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKMATRIXTOLINEARTRANSFORMWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKMATRIXTOLINEARTRANSFORMWRAP_CLASSDEF
#endif
};

#endif
