/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKHARDWARESELECTIONPOLYDATAPAINTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKHARDWARESELECTIONPOLYDATAPAINTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkHardwareSelectionPolyDataPainter.h>

#include "vtkStandardPolyDataPainterWrap.h"
#include "../../plus/plus.h"

class VtkHardwareSelectionPolyDataPainterWrap : public VtkStandardPolyDataPainterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkHardwareSelectionPolyDataPainterWrap(vtkSmartPointer<vtkHardwareSelectionPolyDataPainter>);
		VtkHardwareSelectionPolyDataPainterWrap();
		~VtkHardwareSelectionPolyDataPainterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void EnableSelectionOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EnableSelectionOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCompositeIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEnableSelection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProcessIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCellIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCompositeIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEnableSelection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPointIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProcessIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKHARDWARESELECTIONPOLYDATAPAINTERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKHARDWARESELECTIONPOLYDATAPAINTERWRAP_CLASSDEF
#endif
};

#endif
