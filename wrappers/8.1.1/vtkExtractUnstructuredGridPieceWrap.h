/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKEXTRACTUNSTRUCTUREDGRIDPIECEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKEXTRACTUNSTRUCTUREDGRIDPIECEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkExtractUnstructuredGridPiece.h>

#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkExtractUnstructuredGridPieceWrap : public VtkUnstructuredGridAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkExtractUnstructuredGridPieceWrap(vtkSmartPointer<vtkExtractUnstructuredGridPiece>);
		VtkExtractUnstructuredGridPieceWrap();
		~VtkExtractUnstructuredGridPieceWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CreateGhostCellsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CreateGhostCellsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCreateGhostCells(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCreateGhostCells(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKEXTRACTUNSTRUCTUREDGRIDPIECEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKEXTRACTUNSTRUCTUREDGRIDPIECEWRAP_CLASSDEF
#endif
};

#endif
