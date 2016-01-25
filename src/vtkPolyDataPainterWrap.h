/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPOLYDATAPAINTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPOLYDATAPAINTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPolyDataPainter.h>

#include "vtkPainterWrap.h"

class VtkPolyDataPainterWrap : public VtkPainterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkPolyDataPainterWrap(vtkSmartPointer<vtkPolyDataPainter>);
		VtkPolyDataPainterWrap();
		~VtkPolyDataPainterWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BUILD_NORMALS(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DATA_ARRAY_TO_VERTEX_ATTRIBUTE(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DISABLE_SCALAR_COLOR(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInputAsPolyData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputAsPolyData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SHADER_DEVICE_ADAPTOR(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
