/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKLABELPLACEMENTMAPPERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKLABELPLACEMENTMAPPERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkLabelPlacementMapper.h>

#include "vtkMapper2DWrap.h"

class VtkLabelPlacementMapperWrap : public VtkMapper2DWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkLabelPlacementMapperWrap(vtkSmartPointer<vtkLabelPlacementMapper>);
		VtkLabelPlacementMapperWrap();
		~VtkLabelPlacementMapperWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GeneratePerturbedLabelSpokesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GeneratePerturbedLabelSpokesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAnchorTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBackgroundOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBackgroundOpacityMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBackgroundOpacityMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGeneratePerturbedLabelSpokes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIteratorType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMargin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumLabelFraction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumLabelFractionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumLabelFractionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputTraversedBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPlaceAllLabels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPositionsAsNormals(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRenderStrategy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShape(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShapeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShapeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStyle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStyleMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStyleMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseDepthBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseUnicodeStrings(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OutputTraversedBoundsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OutputTraversedBoundsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PlaceAllLabelsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PlaceAllLabelsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PositionsAsNormalsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PositionsAsNormalsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBackgroundColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBackgroundOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGeneratePerturbedLabelSpokes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIteratorType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMargin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumLabelFraction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputTraversedBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPlaceAllLabels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPositionsAsNormals(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRenderStrategy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShape(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShapeToNone(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShapeToRect(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShapeToRoundedRect(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStyle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStyleToFilled(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStyleToOutline(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseDepthBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseUnicodeStrings(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseDepthBufferOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseDepthBufferOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseUnicodeStringsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseUnicodeStringsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
