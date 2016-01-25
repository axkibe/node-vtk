/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKLIGHTSPASSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKLIGHTSPASSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkLightsPass.h>

#include "vtkRenderPassWrap.h"

class VtkLightsPassWrap : public VtkRenderPassWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkLightsPassWrap(vtkSmartPointer<vtkLightsPass>);
		VtkLightsPassWrap();
		~VtkLightsPassWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
