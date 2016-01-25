/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGEOPENCLOSE3DWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGEOPENCLOSE3DWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageOpenClose3D.h>

#include "vtkImageAlgorithmWrap.h"

class VtkImageOpenClose3DWrap : public VtkImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkImageOpenClose3DWrap(vtkSmartPointer<vtkImageOpenClose3D>);
		VtkImageOpenClose3DWrap();
		~VtkImageOpenClose3DWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void DebugOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DebugOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCloseValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFilter0(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFilter1(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOpenValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Modified(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCloseValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetKernelSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOpenValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
