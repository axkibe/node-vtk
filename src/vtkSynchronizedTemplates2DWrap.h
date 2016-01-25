/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSYNCHRONIZEDTEMPLATES2DWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSYNCHRONIZEDTEMPLATES2DWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkSynchronizedTemplates2D.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkSynchronizedTemplates2DWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkSynchronizedTemplates2DWrap(vtkSmartPointer<vtkSynchronizedTemplates2D>);
		VtkSynchronizedTemplates2DWrap();
		~VtkSynchronizedTemplates2DWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ComputeScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateValues(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComputeScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfContours(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetComputeScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfContours(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif