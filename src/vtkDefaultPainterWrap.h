/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKDEFAULTPAINTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKDEFAULTPAINTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkDefaultPainter.h>

#include "vtkPainterWrap.h"

class VtkDefaultPainterWrap : public VtkPainterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkDefaultPainterWrap(vtkSmartPointer<vtkDefaultPainter>);
		VtkDefaultPainterWrap();
		~VtkDefaultPainterWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClipPlanesPainter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCoincidentTopologyResolutionPainter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCompositePainter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDelegatePainter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDisplayListPainter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLightingPainter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRepresentationPainter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarsToColorsPainter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetClipPlanesPainter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCoincidentTopologyResolutionPainter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCompositePainter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDelegatePainter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDisplayListPainter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLightingPainter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRepresentationPainter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarsToColorsPainter(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
