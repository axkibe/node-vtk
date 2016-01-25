/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKABSTRACTPROPPICKERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKABSTRACTPROPPICKERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAbstractPropPicker.h>

#include "vtkAbstractPickerWrap.h"

class VtkAbstractPropPickerWrap : public VtkAbstractPickerWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkAbstractPropPickerWrap(vtkSmartPointer<vtkAbstractPropPicker>);
		VtkAbstractPropPickerWrap();
		~VtkAbstractPropPickerWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetActor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActor2D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAssembly(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPath(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProp3D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPropAssembly(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetViewProp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVolume(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPath(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
