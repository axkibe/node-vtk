/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKBOXWRAP_H
#define NATIVE_EXTENSION_VTK_VTKBOXWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkBox.h>

#include "vtkImplicitFunctionWrap.h"
#include "../../plus/plus.h"

class VtkBoxWrap : public VtkImplicitFunctionWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkBoxWrap(vtkSmartPointer<vtkBox>);
		VtkBoxWrap();
		~VtkBoxWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EvaluateFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EvaluateGradient(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXMax(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXMin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IntersectWithPlane(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXMax(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXMin(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKBOXWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKBOXWRAP_CLASSDEF
#endif
};

#endif
