/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSTREAMLINEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSTREAMLINEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkStreamLine.h>

#include "vtkStreamerWrap.h"

class VtkStreamLineWrap : public VtkStreamerWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkStreamLineWrap(vtkSmartPointer<vtkStreamLine>);
		VtkStreamLineWrap();
		~VtkStreamLineWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStepLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStepLengthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStepLengthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStepLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
