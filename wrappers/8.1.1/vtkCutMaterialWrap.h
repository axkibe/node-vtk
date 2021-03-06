/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCUTMATERIALWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCUTMATERIALWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCutMaterial.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkCutMaterialWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCutMaterialWrap(vtkSmartPointer<vtkCutMaterial>);
		VtkCutMaterialWrap();
		~VtkCutMaterialWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCenterPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaterial(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaterialArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNormal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUpVector(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaterial(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaterialArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUpVector(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCUTMATERIALWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCUTMATERIALWRAP_CLASSDEF
#endif
};

#endif
