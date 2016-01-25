/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSOCKETWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSOCKETWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkSocket.h>

#include "vtkObjectWrap.h"

class VtkSocketWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkSocketWrap(vtkSmartPointer<vtkSocket>);
		VtkSocketWrap();
		~VtkSocketWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CloseSocket(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetConnected(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSocketDescriptor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
