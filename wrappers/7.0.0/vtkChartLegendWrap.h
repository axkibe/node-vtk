/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCHARTLEGENDWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCHARTLEGENDWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkChartLegend.h>

#include "vtkContextItemWrap.h"

class VtkChartLegendWrap : public VtkContextItemWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkChartLegendWrap(vtkSmartPointer<vtkChartLegend>);
		VtkChartLegendWrap();
		~VtkChartLegendWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CacheBoundsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CacheBoundsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBrush(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCacheBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetChart(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDragEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHorizontalAlignment(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInline(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelProperties(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPadding(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPen(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSymbolWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVerticalAlignment(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Paint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCacheBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetChart(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDragEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHorizontalAlignment(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInline(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPadding(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSymbolWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVerticalAlignment(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Update(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif