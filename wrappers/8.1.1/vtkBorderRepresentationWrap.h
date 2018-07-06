/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKBORDERREPRESENTATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKBORDERREPRESENTATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkBorderRepresentation.h>

#include "vtkWidgetRepresentationWrap.h"
#include "../../plus/plus.h"

class VtkBorderRepresentationWrap : public VtkWidgetRepresentationWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkBorderRepresentationWrap(vtkSmartPointer<vtkBorderRepresentation>);
		VtkBorderRepresentationWrap();
		~VtkBorderRepresentationWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActors2D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBorderProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinimumSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMoving(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPosition2(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPosition2Coordinate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPositionCoordinate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProportionalResize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectionPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShowBorder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShowBorderMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShowBorderMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShowHorizontalBorder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShowHorizontalBorderMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShowHorizontalBorderMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShowVerticalBorder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShowVerticalBorderMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShowVerticalBorderMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MovingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MovingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ProportionalResizeOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ProportionalResizeOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMinimumSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMoving(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPosition2(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProportionalResize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShowBorder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShowBorderToActive(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShowBorderToOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShowBorderToOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShowHorizontalBorder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShowVerticalBorder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StartWidgetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WidgetInteraction(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKBORDERREPRESENTATIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKBORDERREPRESENTATIONWRAP_CLASSDEF
#endif
};

#endif
