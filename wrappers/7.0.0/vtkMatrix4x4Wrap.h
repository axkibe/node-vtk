/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKMATRIX4X4WRAP_H
#define NATIVE_EXTENSION_VTK_VTKMATRIX4X4WRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkMatrix4x4.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkMatrix4x4Wrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkMatrix4x4Wrap(vtkSmartPointer<vtkMatrix4x4>);
		VtkMatrix4x4Wrap();
		~VtkMatrix4x4Wrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void Adjoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Determinant(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetElement(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Identity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Invert(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Multiply4x4(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MultiplyDoublePoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MultiplyFloatPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MultiplyPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PointMultiply(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetElement(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Transpose(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Zero(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKMATRIX4X4WRAP_CLASSDEF
		VTK_NODE_PLUS_VTKMATRIX4X4WRAP_CLASSDEF
#endif
};

#endif
