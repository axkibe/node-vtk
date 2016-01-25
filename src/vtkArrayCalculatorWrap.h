/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKARRAYCALCULATORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKARRAYCALCULATORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkArrayCalculator.h>

#include "vtkDataSetAlgorithmWrap.h"

class VtkArrayCalculatorWrap : public VtkDataSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkArrayCalculatorWrap(vtkSmartPointer<vtkArrayCalculator>);
		VtkArrayCalculatorWrap();
		~VtkArrayCalculatorWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddCoordinateScalarVariable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AddCoordinateVectorVariable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AddScalarArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AddScalarVariable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AddVectorArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AddVectorVariable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CoordinateResultsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CoordinateResultsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAttributeMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAttributeModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCoordinateResults(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfScalarArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfVectorArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetReplaceInvalidValues(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetReplacementValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResultArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResultArrayType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarVariableName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectedScalarComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVectorArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVectorVariableName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveAllVariables(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveCoordinateScalarVariables(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveCoordinateVectorVariables(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveScalarVariables(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveVectorVariables(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReplaceInvalidValuesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReplaceInvalidValuesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ResultNormalsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ResultNormalsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ResultTCoordsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ResultTCoordsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAttributeMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAttributeModeToDefault(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAttributeModeToUseCellData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAttributeModeToUseEdgeData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAttributeModeToUsePointData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAttributeModeToUseVertexData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCoordinateResults(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetReplaceInvalidValues(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetReplacementValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetResultArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetResultArrayType(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
