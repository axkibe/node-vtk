/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGEVIEWERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGEVIEWERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageViewer.h>

#include "vtkObjectWrap.h"

class VtkImageViewerWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkImageViewerWrap(vtkSmartPointer<vtkImageViewer>);
		VtkImageViewerWrap();
		~VtkImageViewerWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetActor2D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetColorLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetColorWindow(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImageMapper(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOffScreenRendering(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRenderWindow(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWholeZMax(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWholeZMin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWindowName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZSlice(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OffScreenRenderingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OffScreenRenderingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Render(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColorLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColorWindow(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOffScreenRendering(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetZSlice(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetupInteractor(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
