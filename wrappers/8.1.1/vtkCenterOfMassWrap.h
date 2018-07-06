/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCENTEROFMASSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCENTEROFMASSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCenterOfMass.h>

#include "vtkPointSetAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkCenterOfMassWrap : public VtkPointSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCenterOfMassWrap(vtkSmartPointer<vtkCenterOfMass>);
		VtkCenterOfMassWrap();
		~VtkCenterOfMassWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ComputeCenterOfMass(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseScalarsAsWeights(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseScalarsAsWeights(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCENTEROFMASSWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCENTEROFMASSWRAP_CLASSDEF
#endif
};

#endif