/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPARAMETRICCONICSPIRALWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPARAMETRICCONICSPIRALWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkParametricConicSpiral.h>

#include "vtkParametricFunctionWrap.h"

class VtkParametricConicSpiralWrap : public VtkParametricFunctionWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkParametricConicSpiralWrap(vtkSmartPointer<vtkParametricConicSpiral>);
		VtkParametricConicSpiralWrap();
		~VtkParametricConicSpiralWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetB(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetC(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDimension(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetN(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetB(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetC(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetN(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
