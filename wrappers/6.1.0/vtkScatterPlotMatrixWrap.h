/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSCATTERPLOTMATRIXWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSCATTERPLOTMATRIXWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkScatterPlotMatrix.h>

#include "vtkChartMatrixWrap.h"
#include "../../plus/plus.h"

class VtkScatterPlotMatrixWrap : public VtkChartMatrixWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkScatterPlotMatrixWrap(vtkSmartPointer<vtkScatterPlotMatrix>);
		VtkScatterPlotMatrixWrap();
		~VtkScatterPlotMatrixWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AdvanceAnimation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BeginAnimationPath(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ClearAnimationPath(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActiveAnnotationLink(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAnnotationLink(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAxisLabelNotation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAxisLabelPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAxisLabelProperties(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAxisLabelVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGridVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIndexedLabels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMainChart(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfBins(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfFrames(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPlotType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectionMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTitleProperties(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTooltip(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTooltipNotation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTooltipPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVisibleColumns(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Paint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAxisLabelNotation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAxisLabelPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAxisLabelProperties(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAxisLabelVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColumnVisibilityAll(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGridVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIndexedLabels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfBins(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfFrames(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPlotMarkerStyle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectionMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTitleProperties(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTooltip(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTooltipNotation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTooltipPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVisibleColumns(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Update(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdateChartSettings(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdateSettings(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKSCATTERPLOTMATRIXWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKSCATTERPLOTMATRIXWRAP_CLASSDEF
#endif
};

#endif
