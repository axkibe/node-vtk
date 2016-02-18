/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCOMPOSITECONTROLPOINTSITEMWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCOMPOSITECONTROLPOINTSITEMWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCompositeControlPointsItem.h>

#include "vtkColorTransferControlPointsItemWrap.h"
#include "../../plus/plus.h"

class VtkCompositeControlPointsItemWrap : public VtkColorTransferControlPointsItemWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCompositeControlPointsItemWrap(vtkSmartPointer<vtkCompositeControlPointsItem>);
		VtkCompositeControlPointsItemWrap();
		~VtkCompositeControlPointsItemWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOpacityFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointsFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseOpacityPointHandles(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColorTransferFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOpacityFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPointsFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseOpacityPointHandles(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCOMPOSITECONTROLPOINTSITEMWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCOMPOSITECONTROLPOINTSITEMWRAP_CLASSDEF
#endif
};

#endif
