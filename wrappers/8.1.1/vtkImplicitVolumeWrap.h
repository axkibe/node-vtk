/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMPLICITVOLUMEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMPLICITVOLUMEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImplicitVolume.h>

#include "vtkImplicitFunctionWrap.h"
#include "../../plus/plus.h"

class VtkImplicitVolumeWrap : public VtkImplicitFunctionWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImplicitVolumeWrap(vtkSmartPointer<vtkImplicitVolume>);
		VtkImplicitVolumeWrap();
		~VtkImplicitVolumeWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void EvaluateFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EvaluateGradient(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutGradient(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVolume(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutGradient(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVolume(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKIMPLICITVOLUMEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKIMPLICITVOLUMEWRAP_CLASSDEF
#endif
};

#endif
