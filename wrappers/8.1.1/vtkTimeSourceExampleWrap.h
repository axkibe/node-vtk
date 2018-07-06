/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTIMESOURCEEXAMPLEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTIMESOURCEEXAMPLEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTimeSourceExample.h>

#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkTimeSourceExampleWrap : public VtkUnstructuredGridAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkTimeSourceExampleWrap(vtkSmartPointer<vtkTimeSourceExample>);
		VtkTimeSourceExampleWrap();
		~VtkTimeSourceExampleWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AnalyticOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AnalyticOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAnalytic(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAnalyticMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAnalyticMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGrowing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGrowingMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGrowingMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXAmplitude(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYAmplitude(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GrowingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GrowingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAnalytic(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGrowing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXAmplitude(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetYAmplitude(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKTIMESOURCEEXAMPLEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKTIMESOURCEEXAMPLEWRAP_CLASSDEF
#endif
};

#endif