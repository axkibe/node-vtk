/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKLINEARTRANSFORMWRAP_H
#define NATIVE_EXTENSION_VTK_VTKLINEARTRANSFORMWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkLinearTransform.h>

#include "vtkHomogeneousTransformWrap.h"

class VtkLinearTransformWrap : public VtkHomogeneousTransformWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkLinearTransformWrap(vtkSmartPointer<vtkLinearTransform>);
		VtkLinearTransformWrap();
		~VtkLinearTransformWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLinearInverse(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InternalTransformNormal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InternalTransformPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InternalTransformVector(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TransformDoubleNormal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TransformDoubleVector(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TransformNormal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TransformNormals(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TransformPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TransformPointsNormalsVectors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TransformVector(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TransformVectors(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
