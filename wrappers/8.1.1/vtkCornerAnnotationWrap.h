/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCORNERANNOTATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCORNERANNOTATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCornerAnnotation.h>

#include "vtkActor2DWrap.h"
#include "../../plus/plus.h"

class VtkCornerAnnotationWrap : public VtkActor2DWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCornerAnnotationWrap(vtkSmartPointer<vtkCornerAnnotation>);
		VtkCornerAnnotationWrap();
		~VtkCornerAnnotationWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ClearAllTexts(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CopyAllTextsFrom(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImageActor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLevelScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLevelShift(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLinearFontScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumFontSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumLineHeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinimumFontSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNonlinearFontScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShowSliceAndImage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWindowLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetImageActor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLevelScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLevelShift(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLinearFontScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumFontSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumLineHeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMinimumFontSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNonlinearFontScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShowSliceAndImage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWindowLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShowSliceAndImageOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShowSliceAndImageOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCORNERANNOTATIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCORNERANNOTATIONWRAP_CLASSDEF
#endif
};

#endif
