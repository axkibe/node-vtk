/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGENERALTRANSFORMWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGENERALTRANSFORMWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGeneralTransform.h>

#include "vtkAbstractTransformWrap.h"

class VtkGeneralTransformWrap : public VtkAbstractTransformWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkGeneralTransformWrap(vtkSmartPointer<vtkGeneralTransform>);
		VtkGeneralTransformWrap();
		~VtkGeneralTransformWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CircuitCheck(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Concatenate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetConcatenatedTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInverseFlag(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfConcatenatedTransforms(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Identity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Inverse(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MakeTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Pop(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PostMultiply(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PreMultiply(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Push(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RotateWXYZ(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RotateX(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RotateY(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RotateZ(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Scale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Translate(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
