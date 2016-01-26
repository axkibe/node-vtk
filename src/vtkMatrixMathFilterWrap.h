/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKMATRIXMATHFILTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKMATRIXMATHFILTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkMatrixMathFilter.h>

#include "vtkDataSetAlgorithmWrap.h"

class VtkMatrixMathFilterWrap : public VtkDataSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkMatrixMathFilterWrap(vtkSmartPointer<vtkMatrixMathFilter>);
		VtkMatrixMathFilterWrap();
		~VtkMatrixMathFilterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOperation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOperation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOperationToDeterminant(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOperationToEigenvalue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOperationToEigenvector(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOperationToInverse(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
