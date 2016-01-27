/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPAINTERDEVICEADAPTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPAINTERDEVICEADAPTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPainterDeviceAdapter.h>

#include "vtkObjectWrap.h"

class VtkPainterDeviceAdapterWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPainterDeviceAdapterWrap(vtkSmartPointer<vtkPainterDeviceAdapter>);
		VtkPainterDeviceAdapterWrap();
		~VtkPainterDeviceAdapterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BeginPrimitive(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Compatible(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DisableAttributeArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EnableAttributeArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EndPrimitive(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsAttributesSupported(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MakeBlending(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MakeLighting(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MakeMultisampling(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void QueryBlending(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void QueryLighting(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void QueryMultisampling(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAttributePointer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Stencil(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif