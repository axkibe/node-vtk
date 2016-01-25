/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKBANDEDPOLYDATACONTOURFILTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKBANDEDPOLYDATACONTOURFILTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkBandedPolyDataContourFilter.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkBandedPolyDataContourFilterWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkBandedPolyDataContourFilterWrap(vtkSmartPointer<vtkBandedPolyDataContourFilter>);
		VtkBandedPolyDataContourFilterWrap();
		~VtkBandedPolyDataContourFilterWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ClippingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ClippingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateContourEdgesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateContourEdgesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateValues(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClipping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetContourEdgesOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGenerateContourEdges(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfContours(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetClipping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGenerateContourEdges(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfContours(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarModeToIndex(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarModeToValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
