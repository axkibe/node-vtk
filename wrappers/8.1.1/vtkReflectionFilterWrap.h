/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKREFLECTIONFILTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKREFLECTIONFILTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkReflectionFilter.h>

#include "vtkDataObjectAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkReflectionFilterWrap : public VtkDataObjectAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkReflectionFilterWrap(vtkSmartPointer<vtkReflectionFilter>);
		VtkReflectionFilterWrap();
		~VtkReflectionFilterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CopyInputOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CopyInputOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FlipAllInputArraysOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FlipAllInputArraysOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCopyInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFlipAllInputArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPlane(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPlaneMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPlaneMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCopyInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFlipAllInputArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPlane(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPlaneToX(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPlaneToXMax(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPlaneToXMin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPlaneToY(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPlaneToYMax(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPlaneToYMin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPlaneToZ(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPlaneToZMax(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPlaneToZMin(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKREFLECTIONFILTERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKREFLECTIONFILTERWRAP_CLASSDEF
#endif
};

#endif
