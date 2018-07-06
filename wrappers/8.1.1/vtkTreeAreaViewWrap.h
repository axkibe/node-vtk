/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTREEAREAVIEWWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTREEAREAVIEWWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTreeAreaView.h>

#include "vtkRenderViewWrap.h"
#include "../../plus/plus.h"

class VtkTreeAreaViewWrap : public VtkRenderViewWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkTreeAreaViewWrap(vtkSmartPointer<vtkTreeAreaView>);
		VtkTreeAreaViewWrap();
		~VtkTreeAreaViewWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AreaLabelVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AreaLabelVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ColorAreasOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ColorAreasOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ColorEdgesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ColorEdgesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EdgeLabelVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EdgeLabelVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAreaColorArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAreaHoverArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAreaLabelArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAreaLabelFontSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAreaLabelVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAreaSizeArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBundlingStrength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetColorAreas(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetColorEdges(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdgeColorArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdgeLabelArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdgeLabelFontSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdgeLabelVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdgeScalarBarVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelPriorityArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLayoutStrategy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShrinkPercentage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseRectangularCoordinates(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAreaColorArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAreaHoverArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAreaLabelArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAreaLabelFontSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAreaLabelVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAreaSizeArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBundlingStrength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColorAreas(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColorEdges(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEdgeColorArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEdgeColorToSplineFraction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEdgeLabelArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEdgeLabelFontSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEdgeLabelVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEdgeScalarBarVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGraphFromInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGraphFromInputConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelPriorityArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLayoutStrategy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShrinkPercentage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTreeFromInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTreeFromInputConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseRectangularCoordinates(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseRectangularCoordinatesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseRectangularCoordinatesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKTREEAREAVIEWWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKTREEAREAVIEWWRAP_CLASSDEF
#endif
};

#endif
