/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGETOPOLYDATAFILTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGETOPOLYDATAFILTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageToPolyDataFilter.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkImageToPolyDataFilterWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkImageToPolyDataFilterWrap(vtkSmartPointer<vtkImageToPolyDataFilter>);
		VtkImageToPolyDataFilterWrap();
		~VtkImageToPolyDataFilterWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void DecimationOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DecimationOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetColorMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetColorModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetColorModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDecimation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDecimationError(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDecimationErrorMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDecimationErrorMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetError(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetErrorMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetErrorMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfSmoothingIterations(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfSmoothingIterationsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfSmoothingIterationsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputStyle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputStyleMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputStyleMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSmoothing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSubImageSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSubImageSizeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSubImageSizeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColorMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColorModeToLUT(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColorModeToLinear256(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDecimation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDecimationError(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetError(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfSmoothingIterations(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputStyle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputStyleToPixelize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputStyleToPolygonalize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputStyleToRunLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSmoothing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSubImageSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SmoothingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SmoothingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
