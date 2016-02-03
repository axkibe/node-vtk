/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKQUATERNIONINTERPOLATORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKQUATERNIONINTERPOLATORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkQuaternionInterpolator.h>

#include "vtkObjectWrap.h"

class VtkQuaternionInterpolatorWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkQuaternionInterpolatorWrap(vtkSmartPointer<vtkQuaternionInterpolator>);
		VtkQuaternionInterpolatorWrap();
		~VtkQuaternionInterpolatorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddQuaternion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInterpolationType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInterpolationTypeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInterpolationTypeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumT(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinimumT(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfQuaternions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InterpolateQuaternion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveQuaternion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolationType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolationTypeToLinear(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolationTypeToSpline(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif