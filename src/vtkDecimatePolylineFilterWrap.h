/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKDECIMATEPOLYLINEFILTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKDECIMATEPOLYLINEFILTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkDecimatePolylineFilter.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkDecimatePolylineFilterWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkDecimatePolylineFilterWrap(vtkSmartPointer<vtkDecimatePolylineFilter>);
		VtkDecimatePolylineFilterWrap();
		~VtkDecimatePolylineFilterWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTargetReduction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTargetReductionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTargetReductionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTargetReduction(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif