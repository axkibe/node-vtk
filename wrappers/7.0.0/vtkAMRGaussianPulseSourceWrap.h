/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKAMRGAUSSIANPULSESOURCEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKAMRGAUSSIANPULSESOURCEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAMRGaussianPulseSource.h>

#include "vtkOverlappingAMRAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkAMRGaussianPulseSourceWrap : public VtkOverlappingAMRAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkAMRGaussianPulseSourceWrap(vtkSmartPointer<vtkAMRGaussianPulseSource>);
		VtkAMRGaussianPulseSourceWrap();
		~VtkAMRGaussianPulseSourceWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPulseAmplitude(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPulseOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPulseWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDimension(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfLevels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPulseAmplitude(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPulseOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPulseWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRefinementRatio(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRootSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXPulseOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXPulseWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetYPulseOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetYPulseWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetZPulseOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetZPulseWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKAMRGAUSSIANPULSESOURCEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKAMRGAUSSIANPULSESOURCEWRAP_CLASSDEF
#endif
};

#endif
