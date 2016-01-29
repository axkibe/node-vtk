/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCOLORLEGENDWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCOLORLEGENDWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkColorLegend.h>

#include "vtkChartLegendWrap.h"

class VtkColorLegendWrap : public VtkChartLegendWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkColorLegendWrap(vtkSmartPointer<vtkColorLegend>);
		VtkColorLegendWrap();
		~VtkColorLegendWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void DrawBorderOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawBorderOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDrawBorder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTransferFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Paint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDrawBorder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTransferFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Update(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
