/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGESLABWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGESLABWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageSlab.h>

#include "vtkThreadedImageAlgorithmWrap.h"

class VtkImageSlabWrap : public VtkThreadedImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkImageSlabWrap(vtkSmartPointer<vtkImageSlab>);
		VtkImageSlabWrap();
		~VtkImageSlabWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMultiSliceOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOperation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOperationAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOperationMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOperationMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrientationMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrientationMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTrapezoidIntegration(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MultiSliceOutputOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MultiSliceOutputOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMultiSliceOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOperation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOperationToMax(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOperationToMean(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOperationToMin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOperationToSum(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrientationToX(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrientationToY(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrientationToZ(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarTypeToDouble(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarTypeToFloat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarTypeToInputScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSliceRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTrapezoidIntegration(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TrapezoidIntegrationOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TrapezoidIntegrationOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
