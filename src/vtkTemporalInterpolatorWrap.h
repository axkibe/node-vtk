/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTEMPORALINTERPOLATORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTEMPORALINTERPOLATORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTemporalInterpolator.h>

#include "vtkMultiTimeStepAlgorithmWrap.h"

class VtkTemporalInterpolatorWrap : public VtkMultiTimeStepAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkTemporalInterpolatorWrap(vtkSmartPointer<vtkTemporalInterpolator>);
		VtkTemporalInterpolatorWrap();
		~VtkTemporalInterpolatorWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDiscreteTimeStepInterval(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResampleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDiscreteTimeStepInterval(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetResampleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif