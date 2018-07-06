/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPARALLELCOORDINATESREPRESENTATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPARALLELCOORDINATESREPRESENTATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkParallelCoordinatesRepresentation.h>

#include "vtkRenderedRepresentationWrap.h"
#include "../../plus/plus.h"

class VtkParallelCoordinatesRepresentationWrap : public VtkRenderedRepresentationWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkParallelCoordinatesRepresentationWrap(vtkSmartPointer<vtkParallelCoordinatesRepresentation>);
		VtkParallelCoordinatesRepresentationWrap();
		~VtkParallelCoordinatesRepresentationWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ApplyViewTheme(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAngleBrushThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAxisColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAxisLabelColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCurveResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFontSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFunctionBrushThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHoverText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLineColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLineOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfAxes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfAxisLabels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfSamples(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPositionNearXCoordinate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRangeAtPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseCurves(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXCoordinateOfPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LassoSelect(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ResetAxes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAngleBrushThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAxisColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAxisLabelColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAxisTitles(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCurveResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFontSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFunctionBrushThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLineColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLineOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfAxisLabels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPlotTitle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRangeAtPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseCurves(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXCoordinateOfPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SwapAxisPositions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseCurvesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseCurvesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKPARALLELCOORDINATESREPRESENTATIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKPARALLELCOORDINATESREPRESENTATIONWRAP_CLASSDEF
#endif
};

#endif
