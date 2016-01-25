/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTEXTMAPPERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTEXTMAPPERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTextMapper.h>

#include "vtkMapper2DWrap.h"

class VtkTextMapperWrap : public VtkMapper2DWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkTextMapperWrap(vtkSmartPointer<vtkTextMapper>);
		VtkTextMapperWrap();
		~VtkTextMapperWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfLines(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSystemFontSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetConstrainedFontSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif