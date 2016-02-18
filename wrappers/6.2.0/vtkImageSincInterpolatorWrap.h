/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGESINCINTERPOLATORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGESINCINTERPOLATORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageSincInterpolator.h>

#include "vtkAbstractImageInterpolatorWrap.h"
#include "../../plus/plus.h"

class VtkImageSincInterpolatorWrap : public VtkAbstractImageInterpolatorWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageSincInterpolatorWrap(vtkSmartPointer<vtkImageSincInterpolator>);
		VtkImageSincInterpolatorWrap();
		~VtkImageSincInterpolatorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AntialiasingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AntialiasingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeSupportSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAntialiasing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBlurFactors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRenormalization(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseWindowParameter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWindowFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWindowFunctionAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWindowHalfWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWindowParameter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsSeparable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenormalizationOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenormalizationOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAntialiasing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBlurFactors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRenormalization(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseWindowParameter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWindowFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWindowFunctionToBlackman(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWindowFunctionToBlackmanHarris3(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWindowFunctionToBlackmanHarris4(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWindowFunctionToBlackmanNuttall3(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWindowFunctionToBlackmanNuttall4(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWindowFunctionToCosine(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWindowFunctionToHamming(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWindowFunctionToHann(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWindowFunctionToKaiser(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWindowFunctionToLanczos(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWindowFunctionToNuttall(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWindowHalfWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWindowParameter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseWindowParameterOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseWindowParameterOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKIMAGESINCINTERPOLATORWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKIMAGESINCINTERPOLATORWRAP_CLASSDEF
#endif
};

#endif
