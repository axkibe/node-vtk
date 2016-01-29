/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKMATRIX3X3WRAP_H
#define NATIVE_EXTENSION_VTK_VTKMATRIX3X3WRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkMatrix3x3.h>

#include "vtkObjectWrap.h"

class VtkMatrix3x3Wrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkMatrix3x3Wrap(vtkSmartPointer<vtkMatrix3x3>);
		VtkMatrix3x3Wrap();
		~VtkMatrix3x3Wrap( );
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
		static void IsIdentity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Multiply3x3(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MultiplyPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PointMultiply(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetElement(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Transpose(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Zero(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
