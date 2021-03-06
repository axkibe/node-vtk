/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGEMATHEMATICSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGEMATHEMATICSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageMathematics.h>

#include "vtkThreadedImageAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkImageMathematicsWrap : public VtkThreadedImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageMathematicsWrap(vtkSmartPointer<vtkImageMathematics>);
		VtkImageMathematicsWrap();
		~VtkImageMathematicsWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void DivideByZeroToCOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DivideByZeroToCOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetConstantC(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetConstantK(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDivideByZeroToC(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOperation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetConstantC(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetConstantK(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDivideByZeroToC(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInput1Data(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInput2Data(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOperation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOperationToATAN(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOperationToATAN2(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOperationToAbsoluteValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOperationToAdd(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOperationToAddConstant(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOperationToComplexMultiply(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOperationToConjugate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOperationToCos(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOperationToDivide(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOperationToExp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOperationToInvert(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOperationToLog(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOperationToMax(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOperationToMin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOperationToMultiply(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOperationToMultiplyByK(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOperationToReplaceCByK(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOperationToSin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOperationToSquare(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOperationToSquareRoot(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOperationToSubtract(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKIMAGEMATHEMATICSWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKIMAGEMATHEMATICSWRAP_CLASSDEF
#endif
};

#endif
