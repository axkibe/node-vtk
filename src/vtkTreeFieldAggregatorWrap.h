/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTREEFIELDAGGREGATORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTREEFIELDAGGREGATORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTreeFieldAggregator.h>

#include "vtkTreeAlgorithmWrap.h"

class VtkTreeFieldAggregatorWrap : public VtkTreeAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkTreeFieldAggregatorWrap(vtkSmartPointer<vtkTreeFieldAggregator>);
		VtkTreeFieldAggregatorWrap();
		~VtkTreeFieldAggregatorWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetField(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LeafVertexUnitSizeOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LeafVertexUnitSizeOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LogScaleOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LogScaleOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetField(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
