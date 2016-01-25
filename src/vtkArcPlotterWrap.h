/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKARCPLOTTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKARCPLOTTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkArcPlotter.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkArcPlotterWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkArcPlotterWrap(vtkSmartPointer<vtkArcPlotter>);
		VtkArcPlotterWrap();
		~VtkArcPlotterWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetCamera(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFieldDataArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFieldDataArrayMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFieldDataArrayMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHeightMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHeightMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOffsetMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOffsetMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPlotComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPlotMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRadiusMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRadiusMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseDefaultNormal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCamera(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFieldDataArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPlotComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPlotMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPlotModeToPlotFieldData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPlotModeToPlotNormals(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPlotModeToPlotScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPlotModeToPlotTCoords(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPlotModeToPlotTensors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPlotModeToPlotVectors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseDefaultNormal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseDefaultNormalOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseDefaultNormalOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif