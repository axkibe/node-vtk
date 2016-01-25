/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKKOCHANEKSPLINEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKKOCHANEKSPLINEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkKochanekSpline.h>

#include "vtkSplineWrap.h"

class VtkKochanekSplineWrap : public VtkSplineWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkKochanekSplineWrap(vtkSmartPointer<vtkKochanekSpline>);
		VtkKochanekSplineWrap();
		~VtkKochanekSplineWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void Compute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Evaluate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDefaultBias(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDefaultContinuity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDefaultTension(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDefaultBias(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDefaultContinuity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDefaultTension(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
