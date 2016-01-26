/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGEGAUSSIANSMOOTHWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGEGAUSSIANSMOOTHWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageGaussianSmooth.h>

#include "vtkThreadedImageAlgorithmWrap.h"

class VtkImageGaussianSmoothWrap : public VtkThreadedImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageGaussianSmoothWrap(vtkSmartPointer<vtkImageGaussianSmooth>);
		VtkImageGaussianSmoothWrap();
		~VtkImageGaussianSmoothWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDimensionality(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDimensionality(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRadiusFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRadiusFactors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStandardDeviation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStandardDeviations(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
