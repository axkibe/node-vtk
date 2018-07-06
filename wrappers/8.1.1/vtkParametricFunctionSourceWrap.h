/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPARAMETRICFUNCTIONSOURCEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPARAMETRICFUNCTIONSOURCEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkParametricFunctionSource.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkParametricFunctionSourceWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkParametricFunctionSourceWrap(vtkSmartPointer<vtkParametricFunctionSource>);
		VtkParametricFunctionSourceWrap();
		~VtkParametricFunctionSourceWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GenerateNormalsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateNormalsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateTextureCoordinatesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateTextureCoordinatesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGenerateNormals(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGenerateNormalsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGenerateNormalsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGenerateTextureCoordinates(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGenerateTextureCoordinatesMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGenerateTextureCoordinatesMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetParametricFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUResolutionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUResolutionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVResolutionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVResolutionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWResolutionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWResolutionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGenerateNormals(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGenerateTextureCoordinates(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetParametricFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarModeToDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarModeToFunctionDefined(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarModeToModulus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarModeToNone(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarModeToPhase(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarModeToQuadrant(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarModeToU(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarModeToU0(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarModeToU0V0(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarModeToV(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarModeToV0(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarModeToX(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarModeToY(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarModeToZ(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKPARAMETRICFUNCTIONSOURCEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKPARAMETRICFUNCTIONSOURCEWRAP_CLASSDEF
#endif
};

#endif