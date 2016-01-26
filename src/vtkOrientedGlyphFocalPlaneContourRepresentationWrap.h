/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKORIENTEDGLYPHFOCALPLANECONTOURREPRESENTATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKORIENTEDGLYPHFOCALPLANECONTOURREPRESENTATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkOrientedGlyphFocalPlaneContourRepresentation.h>

#include "vtkFocalPlaneContourRepresentationWrap.h"

class VtkOrientedGlyphFocalPlaneContourRepresentationWrap : public VtkFocalPlaneContourRepresentationWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkOrientedGlyphFocalPlaneContourRepresentationWrap(vtkSmartPointer<vtkOrientedGlyphFocalPlaneContourRepresentation>);
		VtkOrientedGlyphFocalPlaneContourRepresentationWrap();
		~VtkOrientedGlyphFocalPlaneContourRepresentationWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActiveCursorShape(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActiveProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActors2D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetContourRepresentationAsPolyData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCursorShape(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLinesProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetActiveCursorShape(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCursorShape(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
