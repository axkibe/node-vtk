/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTRANSFORM2DWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTRANSFORM2DWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTransform2D.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkTransform2DWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkTransform2DWrap(vtkSmartPointer<vtkTransform2D>);
		VtkTransform2DWrap();
		~VtkTransform2DWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInverse(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTranspose(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Identity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Inverse(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InverseTransformPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MultiplyPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Rotate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Scale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TransformPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Translate(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKTRANSFORM2DWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKTRANSFORM2DWRAP_CLASSDEF
#endif
};

#endif
