/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKBIDIMENSIONALWIDGETWRAP_H
#define NATIVE_EXTENSION_VTK_VTKBIDIMENSIONALWIDGETWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkBiDimensionalWidget.h>

#include "vtkAbstractWidgetWrap.h"
#include "../../plus/plus.h"

class VtkBiDimensionalWidgetWrap : public VtkAbstractWidgetWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkBiDimensionalWidgetWrap(vtkSmartPointer<vtkBiDimensionalWidget>);
		VtkBiDimensionalWidgetWrap();
		~VtkBiDimensionalWidgetWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CreateDefaultRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBiDimensionalRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWidgetState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsMeasureValid(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProcessEvents(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWidgetStateToManipulate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWidgetStateToStart(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKBIDIMENSIONALWIDGETWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKBIDIMENSIONALWIDGETWRAP_CLASSDEF
#endif
};

#endif
