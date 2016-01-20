/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKWINDOWWRAP_H
#define NATIVE_EXTENSION_VTK_VTKWINDOWWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkWindow.h>

#include "vtkObjectWrap.h"

class VtkWindowWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkWindowWrap(vtkSmartPointer<vtkWindow>);
		VtkWindowWrap();
		~VtkWindowWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWindowInfo(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetParentInfo(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMapped(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMapped(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MappedOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MappedOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetErase(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetErase(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EraseOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EraseOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDoubleBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDoubleBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DoubleBufferOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DoubleBufferOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWindowName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWindowName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Render(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDPI(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDPI(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDPIMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDPIMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOffScreenRendering(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOffScreenRendering(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OffScreenRenderingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OffScreenRenderingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MakeCurrent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTileScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTileViewport(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
