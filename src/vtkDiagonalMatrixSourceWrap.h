/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKDIAGONALMATRIXSOURCEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKDIAGONALMATRIXSOURCEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkDiagonalMatrixSource.h>

#include "vtkArrayDataAlgorithmWrap.h"

class VtkDiagonalMatrixSourceWrap : public VtkArrayDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkDiagonalMatrixSourceWrap(vtkSmartPointer<vtkDiagonalMatrixSource>);
		VtkDiagonalMatrixSourceWrap();
		~VtkDiagonalMatrixSourceWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetArrayType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetColumnLabel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDiagonal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRowLabel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSubDiagonal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSuperDiagonal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetArrayType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColumnLabel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDiagonal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRowLabel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSubDiagonal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSuperDiagonal(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
