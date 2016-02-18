/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKVALUEPASSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKVALUEPASSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkValuePass.h>

#include "vtkDefaultPassWrap.h"
#include "../../plus/plus.h"

class VtkValuePassWrap : public VtkDefaultPassWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkValuePassWrap(vtkSmartPointer<vtkValuePass>);
		VtkValuePassWrap();
		~VtkValuePassWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ARRAY_COMPONENT(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ARRAY_ID(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ARRAY_MODE(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ARRAY_NAME(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RENDER_VALUES(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SCALAR_MODE(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SCALAR_RANGE(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputArrayToProcess(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputComponentToProcess(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarRange(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKVALUEPASSWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKVALUEPASSWRAP_CLASSDEF
#endif
};

#endif
