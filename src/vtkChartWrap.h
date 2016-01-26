/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCHARTWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCHARTWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkChart.h>

#include "vtkContextItemWrap.h"

class VtkChartWrap : public VtkContextItemWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkChartWrap(vtkSmartPointer<vtkChart>);
		VtkChartWrap();
		~VtkChartWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddPlot(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ClearPlots(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActionToButton(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAnnotationLink(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBackgroundBrush(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClickActionToButton(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLayoutStrategy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLegend(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectionMethod(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectionMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTitleProperties(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RecalculateBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetActionToButton(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAnnotationLink(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBackgroundBrush(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBorders(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBottomBorder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetClickActionToButton(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLayoutStrategy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLeftBorder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPoint1(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPoint2(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRightBorder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectionMethod(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectionMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTopBorder(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
