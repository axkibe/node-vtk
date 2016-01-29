/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPARAMETRICRANDOMHILLSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPARAMETRICRANDOMHILLSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkParametricRandomHills.h>

#include "vtkParametricFunctionWrap.h"

class VtkParametricRandomHillsWrap : public VtkParametricFunctionWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkParametricRandomHillsWrap(vtkSmartPointer<vtkParametricRandomHills>);
		VtkParametricRandomHillsWrap();
		~VtkParametricRandomHillsWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AllowRandomGenerationOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AllowRandomGenerationOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Evaluate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EvaluateScalar(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateTheHills(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAllowRandomGeneration(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAmplitudeScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDimension(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHillAmplitude(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHillXVariance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHillYVariance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfHills(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRandomSeed(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXVarianceScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYVarianceScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAllowRandomGeneration(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAmplitudeScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHillAmplitude(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHillXVariance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHillYVariance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfHills(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRandomSeed(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXVarianceScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetYVarianceScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
