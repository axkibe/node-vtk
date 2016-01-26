/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKHEDGEHOGWRAP_H
#define NATIVE_EXTENSION_VTK_VTKHEDGEHOGWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkHedgeHog.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkHedgeHogWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkHedgeHogWrap(vtkSmartPointer<vtkHedgeHog>);
		VtkHedgeHogWrap();
		~VtkHedgeHogWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVectorMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVectorModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVectorMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVectorModeToUseNormal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVectorModeToUseVector(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
