/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKFLYINGEDGESPLANECUTTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKFLYINGEDGESPLANECUTTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkFlyingEdgesPlaneCutter.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkFlyingEdgesPlaneCutterWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkFlyingEdgesPlaneCutterWrap(vtkSmartPointer<vtkFlyingEdgesPlaneCutter>);
		VtkFlyingEdgesPlaneCutterWrap();
		~VtkFlyingEdgesPlaneCutterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ComputeNormalsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeNormalsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComputeNormals(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPlane(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetComputeNormals(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPlane(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKFLYINGEDGESPLANECUTTERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKFLYINGEDGESPLANECUTTERWRAP_CLASSDEF
#endif
};

#endif
