/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKOPENGLHARDWARESUPPORTWRAP_H
#define NATIVE_EXTENSION_VTK_VTKOPENGLHARDWARESUPPORTWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkOpenGLHardwareSupport.h>

#include "vtkObjectWrap.h"

class VtkOpenGLHardwareSupportWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkOpenGLHardwareSupportWrap(vtkSmartPointer<vtkOpenGLHardwareSupport>);
		VtkOpenGLHardwareSupportWrap();
		~VtkOpenGLHardwareSupportWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetExtensionManager(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfFixedTextureUnits(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfTextureUnits(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetExtensionManager(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
