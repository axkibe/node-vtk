/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCAPTIONACTOR2DWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCAPTIONACTOR2DWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCaptionActor2D.h>

#include "vtkActor2DWrap.h"

class VtkCaptionActor2DWrap : public VtkActor2DWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCaptionActor2DWrap(vtkSmartPointer<vtkCaptionActor2D>);
		VtkCaptionActor2DWrap();
		~VtkCaptionActor2DWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AttachEdgeOnlyOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AttachEdgeOnlyOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BorderOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BorderOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAttachEdgeOnly(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAttachmentPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAttachmentPointCoordinate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBorder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCaption(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCaptionTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLeader(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLeaderGlyph(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLeaderGlyphSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLeaderGlyphSizeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLeaderGlyphSizeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumLeaderGlyphSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumLeaderGlyphSizeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumLeaderGlyphSizeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPadding(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPaddingMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPaddingMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextActor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetThreeDimensionalLeader(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LeaderOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LeaderOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAttachEdgeOnly(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAttachmentPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBorder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCaption(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCaptionTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLeader(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLeaderGlyphConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLeaderGlyphData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLeaderGlyphSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumLeaderGlyphSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPadding(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetThreeDimensionalLeader(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ThreeDimensionalLeaderOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ThreeDimensionalLeaderOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
