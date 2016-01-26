/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKABSTRACTCONTEXTBUFFERIDWRAP_H
#define NATIVE_EXTENSION_VTK_VTKABSTRACTCONTEXTBUFFERIDWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAbstractContextBufferId.h>

#include "vtkObjectWrap.h"

class VtkAbstractContextBufferIdWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkAbstractContextBufferIdWrap(vtkSmartPointer<vtkAbstractContextBufferId>);
		VtkAbstractContextBufferIdWrap();
		~VtkAbstractContextBufferIdWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void Allocate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetValues(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
