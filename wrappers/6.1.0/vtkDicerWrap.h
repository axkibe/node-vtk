/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKDICERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKDICERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkDicer.h>

#include "vtkDataSetAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkDicerWrap : public VtkDataSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkDicerWrap(vtkSmartPointer<vtkDicer>);
		VtkDicerWrap();
		~VtkDicerWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void FieldDataOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FieldDataOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDiceMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDiceModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDiceModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFieldData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfActualPieces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPieces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPiecesMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPiecesMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPointsPerPiece(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPointsPerPieceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPointsPerPieceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDiceMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDiceModeToMemoryLimitPerPiece(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDiceModeToNumberOfPointsPerPiece(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDiceModeToSpecifiedNumberOfPieces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFieldData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfPieces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfPointsPerPiece(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKDICERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKDICERWRAP_CLASSDEF
#endif
};

#endif
