/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKBALLOONREPRESENTATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKBALLOONREPRESENTATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkBalloonRepresentation.h>

#include "vtkWidgetRepresentationWrap.h"
#include "../../plus/plus.h"

class VtkBalloonRepresentationWrap : public VtkWidgetRepresentationWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkBalloonRepresentationWrap(vtkSmartPointer<vtkBalloonRepresentation>);
		VtkBalloonRepresentationWrap();
		~VtkBalloonRepresentationWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EndWidgetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBalloonImage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBalloonLayout(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBalloonText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFrameProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImageProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImageSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPadding(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPaddingMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPaddingMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBalloonImage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBalloonLayout(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBalloonLayoutToImageBottom(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBalloonLayoutToImageLeft(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBalloonLayoutToImageRight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBalloonLayoutToImageTop(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBalloonLayoutToTextBottom(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBalloonLayoutToTextLeft(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBalloonLayoutToTextRight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBalloonLayoutToTextTop(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBalloonText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFrameProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetImageProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetImageSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPadding(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StartWidgetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKBALLOONREPRESENTATIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKBALLOONREPRESENTATIONWRAP_CLASSDEF
#endif
};

#endif
