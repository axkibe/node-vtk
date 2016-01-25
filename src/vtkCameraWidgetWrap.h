/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCAMERAWIDGETWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCAMERAWIDGETWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCameraWidget.h>

#include "vtkBorderWidgetWrap.h"

class VtkCameraWidgetWrap : public VtkBorderWidgetWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkCameraWidgetWrap(vtkSmartPointer<vtkCameraWidget>);
		VtkCameraWidgetWrap();
		~VtkCameraWidgetWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CreateDefaultRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
