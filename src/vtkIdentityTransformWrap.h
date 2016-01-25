/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIDENTITYTRANSFORMWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIDENTITYTRANSFORMWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkIdentityTransform.h>

#include "vtkLinearTransformWrap.h"

class VtkIdentityTransformWrap : public VtkLinearTransformWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkIdentityTransformWrap(vtkSmartPointer<vtkIdentityTransform>);
		VtkIdentityTransformWrap();
		~VtkIdentityTransformWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Inverse(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MakeTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TransformNormals(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TransformPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TransformPointsNormalsVectors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TransformVectors(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
