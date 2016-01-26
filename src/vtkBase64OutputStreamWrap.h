/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKBASE64OUTPUTSTREAMWRAP_H
#define NATIVE_EXTENSION_VTK_VTKBASE64OUTPUTSTREAMWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkBase64OutputStream.h>

#include "vtkOutputStreamWrap.h"

class VtkBase64OutputStreamWrap : public VtkOutputStreamWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkBase64OutputStreamWrap(vtkSmartPointer<vtkBase64OutputStream>);
		VtkBase64OutputStreamWrap();
		~VtkBase64OutputStreamWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void EndWriting(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StartWriting(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
