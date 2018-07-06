/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSELECTVISIBLEPOINTSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSELECTVISIBLEPOINTSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkSelectVisiblePoints.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkSelectVisiblePointsWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkSelectVisiblePointsWrap(vtkSmartPointer<vtkSelectVisiblePoints>);
		VtkSelectVisiblePointsWrap();
		~VtkSelectVisiblePointsWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectInvisible(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectionWindow(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SelectInvisibleOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SelectInvisibleOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SelectionWindowOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SelectionWindowOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectInvisible(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectionWindow(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKSELECTVISIBLEPOINTSWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKSELECTVISIBLEPOINTSWRAP_CLASSDEF
#endif
};

#endif