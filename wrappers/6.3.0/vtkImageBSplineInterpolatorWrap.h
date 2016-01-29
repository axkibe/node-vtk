/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGEBSPLINEINTERPOLATORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGEBSPLINEINTERPOLATORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageBSplineInterpolator.h>

#include "vtkAbstractImageInterpolatorWrap.h"

class VtkImageBSplineInterpolatorWrap : public VtkAbstractImageInterpolatorWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageBSplineInterpolatorWrap(vtkSmartPointer<vtkImageBSplineInterpolator>);
		VtkImageBSplineInterpolatorWrap();
		~VtkImageBSplineInterpolatorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ComputeSupportSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSplineDegree(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSplineDegreeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSplineDegreeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsSeparable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSplineDegree(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
