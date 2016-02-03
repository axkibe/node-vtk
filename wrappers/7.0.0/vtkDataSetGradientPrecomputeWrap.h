/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKDATASETGRADIENTPRECOMPUTEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKDATASETGRADIENTPRECOMPUTEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkDataSetGradientPrecompute.h>

#include "vtkDataSetAlgorithmWrap.h"

class VtkDataSetGradientPrecomputeWrap : public VtkDataSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkDataSetGradientPrecomputeWrap(vtkSmartPointer<vtkDataSetGradientPrecompute>);
		VtkDataSetGradientPrecomputeWrap();
		~VtkDataSetGradientPrecomputeWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GradientPrecompute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
