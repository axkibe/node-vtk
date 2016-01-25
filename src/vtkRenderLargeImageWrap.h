/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKRENDERLARGEIMAGEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKRENDERLARGEIMAGEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkRenderLargeImage.h>

#include "vtkAlgorithmWrap.h"

class VtkRenderLargeImageWrap : public VtkAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkRenderLargeImageWrap(vtkSmartPointer<vtkRenderLargeImage>);
		VtkRenderLargeImageWrap();
		~VtkRenderLargeImageWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMagnification(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMagnification(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif