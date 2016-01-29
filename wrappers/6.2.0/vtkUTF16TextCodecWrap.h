/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKUTF16TEXTCODECWRAP_H
#define NATIVE_EXTENSION_VTK_VTKUTF16TEXTCODECWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkUTF16TextCodec.h>

#include "vtkTextCodecWrap.h"

class VtkUTF16TextCodecWrap : public VtkTextCodecWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkUTF16TextCodecWrap(vtkSmartPointer<vtkUTF16TextCodec>);
		VtkUTF16TextCodecWrap();
		~VtkUTF16TextCodecWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CanHandle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Name(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBigEndian(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
