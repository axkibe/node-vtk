/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKBALLOONWIDGETWRAP_H
#define NATIVE_EXTENSION_VTK_VTKBALLOONWIDGETWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkBalloonWidget.h>

#include "vtkHoverWidgetWrap.h"

class VtkBalloonWidgetWrap : public VtkHoverWidgetWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkBalloonWidgetWrap(vtkSmartPointer<vtkBalloonWidget>);
		VtkBalloonWidgetWrap();
		~VtkBalloonWidgetWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddBalloon(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CreateDefaultRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBalloonImage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBalloonRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBalloonString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCurrentProp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPicker(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveBalloon(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPicker(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdateBalloonImage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdateBalloonString(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif