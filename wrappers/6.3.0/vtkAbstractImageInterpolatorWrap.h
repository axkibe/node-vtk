/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKABSTRACTIMAGEINTERPOLATORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKABSTRACTIMAGEINTERPOLATORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAbstractImageInterpolator.h>

#include "vtkObjectWrap.h"

class VtkAbstractImageInterpolatorWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkAbstractImageInterpolatorWrap(vtkSmartPointer<vtkAbstractImageInterpolator>);
		VtkAbstractImageInterpolatorWrap();
		~VtkAbstractImageInterpolatorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ComputeNumberOfComponents(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBorderMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBorderModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComponentCount(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComponentOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfComponents(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Interpolate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsSeparable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBorderMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBorderModeToClamp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBorderModeToMirror(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBorderModeToRepeat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetComponentCount(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetComponentOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Update(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
