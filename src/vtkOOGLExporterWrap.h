/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKOOGLEXPORTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKOOGLEXPORTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkOOGLExporter.h>

#include "vtkExporterWrap.h"

class VtkOOGLExporterWrap : public VtkExporterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkOOGLExporterWrap(vtkSmartPointer<vtkOOGLExporter>);
		VtkOOGLExporterWrap();
		~VtkOOGLExporterWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
