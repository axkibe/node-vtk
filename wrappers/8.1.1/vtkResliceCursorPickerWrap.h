/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKRESLICECURSORPICKERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKRESLICECURSORPICKERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkResliceCursorPicker.h>

#include "vtkPickerWrap.h"
#include "../../plus/plus.h"

class VtkResliceCursorPickerWrap : public VtkPickerWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkResliceCursorPickerWrap(vtkSmartPointer<vtkResliceCursorPicker>);
		VtkResliceCursorPickerWrap();
		~VtkResliceCursorPickerWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetPickedAxis1(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPickedAxis2(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPickedCenter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResliceCursorAlgorithm(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Pick(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetResliceCursorAlgorithm(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTransformMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKRESLICECURSORPICKERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKRESLICECURSORPICKERWRAP_CLASSDEF
#endif
};

#endif
