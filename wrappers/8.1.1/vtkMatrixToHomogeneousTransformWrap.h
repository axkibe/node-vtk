/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKMATRIXTOHOMOGENEOUSTRANSFORMWRAP_H
#define NATIVE_EXTENSION_VTK_VTKMATRIXTOHOMOGENEOUSTRANSFORMWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkMatrixToHomogeneousTransform.h>

#include "vtkHomogeneousTransformWrap.h"
#include "../../plus/plus.h"

class VtkMatrixToHomogeneousTransformWrap : public VtkHomogeneousTransformWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkMatrixToHomogeneousTransformWrap(vtkSmartPointer<vtkMatrixToHomogeneousTransform>);
		VtkMatrixToHomogeneousTransformWrap();
		~VtkMatrixToHomogeneousTransformWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Inverse(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MakeTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKMATRIXTOHOMOGENEOUSTRANSFORMWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKMATRIXTOHOMOGENEOUSTRANSFORMWRAP_CLASSDEF
#endif
};

#endif
