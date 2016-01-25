/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKLINEWIDGETWRAP_H
#define NATIVE_EXTENSION_VTK_VTKLINEWIDGETWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkLineWidget.h>

#include "vtk3DWidgetWrap.h"

class VtkLineWidgetWrap : public Vtk3DWidgetWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkLineWidgetWrap(vtkSmartPointer<vtkLineWidget>);
		VtkLineWidgetWrap();
		~VtkLineWidgetWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ClampToBoundsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ClampToBoundsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAlign(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAlignMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAlignMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClampToBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHandleProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPolyData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectedHandleProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectedLineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PlaceWidget(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAlign(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAlignToNone(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAlignToXAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAlignToYAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAlignToZAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetClampToBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPoint1(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPoint2(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
