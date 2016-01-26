/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKRENDEREDGRAPHREPRESENTATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKRENDEREDGRAPHREPRESENTATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkRenderedGraphRepresentation.h>

#include "vtkRenderedRepresentationWrap.h"

class VtkRenderedGraphRepresentationWrap : public VtkRenderedRepresentationWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkRenderedGraphRepresentationWrap(vtkSmartPointer<vtkRenderedGraphRepresentation>);
		VtkRenderedGraphRepresentationWrap();
		~VtkRenderedGraphRepresentationWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddEdgeIconType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AddVertexIconType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ApplyViewTheme(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ClearEdgeIconTypes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ClearVertexIconTypes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ColorEdgesByArrayOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ColorEdgesByArrayOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ColorVerticesByArrayOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ColorVerticesByArrayOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EdgeIconVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EdgeIconVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EdgeLabelVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EdgeLabelVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EdgeVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EdgeVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EnableEdgesByArrayOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EnableEdgesByArrayOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EnableVerticesByArrayOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EnableVerticesByArrayOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdgeColorArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdgeHoverArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdgeIconAlignment(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdgeIconArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdgeIconPriorityArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdgeLabelArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdgeLabelPriorityArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdgeLabelTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdgeLayoutStrategy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdgeLayoutStrategyName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdgeScalarBar(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEnabledEdgesArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEnabledVerticesArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGlyphType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLayoutStrategy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLayoutStrategyName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalingArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVertexColorArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVertexDefaultIcon(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVertexHoverArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVertexIconAlignment(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVertexIconArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVertexIconPriorityArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVertexIconSelectionMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVertexLabelArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVertexLabelPriorityArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVertexLabelTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVertexScalarBar(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVertexSelectedIcon(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HideEdgeLabelsOnInteractionOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HideEdgeLabelsOnInteractionOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HideVertexLabelsOnInteractionOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HideVertexLabelsOnInteractionOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ScalingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ScalingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEdgeColorArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEdgeHoverArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEdgeIconAlignment(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEdgeIconArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEdgeIconPriorityArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEdgeLabelArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEdgeLabelPriorityArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEdgeLabelTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEdgeLayoutStrategy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEdgeLayoutStrategyToArcParallel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEdgeLayoutStrategyToGeo(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEdgeLayoutStrategyToPassThrough(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEnabledEdgesArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEnabledVerticesArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGlyphType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLayoutStrategy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLayoutStrategyToAssignCoordinates(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLayoutStrategyToCircular(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLayoutStrategyToClustering2D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLayoutStrategyToCommunity2D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLayoutStrategyToCone(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLayoutStrategyToCosmicTree(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLayoutStrategyToFast2D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLayoutStrategyToForceDirected(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLayoutStrategyToPassThrough(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLayoutStrategyToRandom(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLayoutStrategyToSimple2D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLayoutStrategyToSpanTree(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLayoutStrategyToTree(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalingArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVertexColorArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVertexDefaultIcon(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVertexHoverArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVertexIconAlignment(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVertexIconArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVertexIconPriorityArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVertexIconSelectionMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVertexIconSelectionModeToAnnotationIcon(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVertexIconSelectionModeToIgnoreSelection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVertexIconSelectionModeToSelectedIcon(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVertexIconSelectionModeToSelectedOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVertexLabelArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVertexLabelPriorityArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVertexLabelTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVertexSelectedIcon(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdateLayout(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseEdgeIconTypeMapOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseEdgeIconTypeMapOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseVertexIconTypeMapOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseVertexIconTypeMapOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void VertexIconVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void VertexIconVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void VertexLabelVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void VertexLabelVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
