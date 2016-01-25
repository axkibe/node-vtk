/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKEXTRACTTENSORCOMPONENTSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKEXTRACTTENSORCOMPONENTSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkExtractTensorComponents.h>

#include "vtkDataSetAlgorithmWrap.h"

class VtkExtractTensorComponentsWrap : public VtkDataSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkExtractTensorComponentsWrap(vtkSmartPointer<vtkExtractTensorComponents>);
		VtkExtractTensorComponentsWrap();
		~VtkExtractTensorComponentsWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ExtractNormalsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ExtractNormalsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ExtractScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ExtractScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ExtractTCoordsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ExtractTCoordsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ExtractVectorsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ExtractVectorsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetExtractNormals(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetExtractScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetExtractTCoords(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetExtractVectors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNormalizeNormals(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfTCoords(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfTCoordsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfTCoordsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPassTensorsToOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NormalizeNormalsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NormalizeNormalsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PassTensorsToOutputOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PassTensorsToOutputOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ScalarIsComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ScalarIsDeterminant(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ScalarIsEffectiveStress(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetExtractNormals(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetExtractScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetExtractTCoords(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetExtractVectors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNormalComponents(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNormalizeNormals(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfTCoords(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPassTensorsToOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarComponents(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarModeToComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarModeToDeterminant(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarModeToEffectiveStress(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTCoordComponents(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVectorComponents(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif