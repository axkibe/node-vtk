/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTEXTUREDBUTTONREPRESENTATION2DWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTEXTUREDBUTTONREPRESENTATION2DWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTexturedButtonRepresentation2D.h>

#include "vtkButtonRepresentationWrap.h"
#include "../../plus/plus.h"

class VtkTexturedButtonRepresentation2DWrap : public VtkButtonRepresentationWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkTexturedButtonRepresentation2DWrap(vtkSmartPointer<vtkTexturedButtonRepresentation2D>);
		VtkTexturedButtonRepresentation2DWrap();
		~VtkTexturedButtonRepresentation2DWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBalloon(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetButtonTexture(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHoveringProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectingProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Highlight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PlaceWidget(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetButtonTexture(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHoveringProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectingProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKTEXTUREDBUTTONREPRESENTATION2DWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKTEXTUREDBUTTONREPRESENTATION2DWRAP_CLASSDEF
#endif
};

#endif