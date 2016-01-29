/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKAXISWRAP_H
#define NATIVE_EXTENSION_VTK_VTKAXISWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAxis.h>

#include "vtkContextItemWrap.h"

class VtkAxisWrap : public VtkContextItemWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkAxisWrap(vtkSmartPointer<vtkAxis>);
		VtkAxisWrap();
		~VtkAxisWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AutoScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBehavior(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGridPen(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGridVisible(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelProperties(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelsVisible(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLogScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLogScaleActive(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximum(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumLimit(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinimum(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinimumLimit(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNotation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfTicks(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPen(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalingFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShift(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTickLabelAlgorithm(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTickLabels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTickPositions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTickScenePositions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTicksVisible(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTitleProperties(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUnscaledMaximum(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUnscaledMaximumLimit(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUnscaledMinimum(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUnscaledMinimumLimit(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LogScaleOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LogScaleOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NiceNumber(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Paint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RecalculateTickSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBehavior(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCustomTickPositions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGridVisible(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelsVisible(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLogScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMargins(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximum(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumLimit(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMinimum(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMinimumLimit(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNotation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfTicks(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalingFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShift(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTickLabelAlgorithm(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTickLabels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTickPositions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTicksVisible(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUnscaledMaximum(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUnscaledMaximumLimit(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUnscaledMinimum(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUnscaledMinimumLimit(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUnscaledRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Update(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
