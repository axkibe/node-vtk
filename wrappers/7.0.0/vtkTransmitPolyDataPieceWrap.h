/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTRANSMITPOLYDATAPIECEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTRANSMITPOLYDATAPIECEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTransmitPolyDataPiece.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkTransmitPolyDataPieceWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkTransmitPolyDataPieceWrap(vtkSmartPointer<vtkTransmitPolyDataPiece>);
		VtkTransmitPolyDataPieceWrap();
		~VtkTransmitPolyDataPieceWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CreateGhostCellsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CreateGhostCellsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetController(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCreateGhostCells(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetController(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCreateGhostCells(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKTRANSMITPOLYDATAPIECEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKTRANSMITPOLYDATAPIECEWRAP_CLASSDEF
#endif
};

#endif
