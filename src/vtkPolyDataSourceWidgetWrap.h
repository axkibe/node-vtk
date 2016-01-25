/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPOLYDATASOURCEWIDGETWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPOLYDATASOURCEWIDGETWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPolyDataSourceWidget.h>

#include "vtk3DWidgetWrap.h"

class VtkPolyDataSourceWidgetWrap : public Vtk3DWidgetWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkPolyDataSourceWidgetWrap(vtkSmartPointer<vtkPolyDataSourceWidget>);
		VtkPolyDataSourceWidgetWrap();
		~VtkPolyDataSourceWidgetWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPolyDataAlgorithm(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PlaceWidget(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdatePlacement(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
