/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKDEFORMPOINTSETWRAP_H
#define NATIVE_EXTENSION_VTK_VTKDEFORMPOINTSETWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkDeformPointSet.h>

#include "vtkPointSetAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkDeformPointSetWrap : public VtkPointSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkDeformPointSetWrap(vtkSmartPointer<vtkDeformPointSet>);
		VtkDeformPointSetWrap();
		~VtkDeformPointSetWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetControlMeshData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInitializeWeights(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InitializeWeightsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InitializeWeightsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetControlMeshConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetControlMeshData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInitializeWeights(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKDEFORMPOINTSETWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKDEFORMPOINTSETWRAP_CLASSDEF
#endif
};

#endif
