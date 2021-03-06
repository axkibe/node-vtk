/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKBUTTONREPRESENTATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKBUTTONREPRESENTATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkButtonRepresentation.h>

#include "vtkWidgetRepresentationWrap.h"
#include "../../plus/plus.h"

class VtkButtonRepresentationWrap : public VtkWidgetRepresentationWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkButtonRepresentationWrap(vtkSmartPointer<vtkButtonRepresentation>);
		VtkButtonRepresentationWrap();
		~VtkButtonRepresentationWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetHighlightState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfStatesMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfStatesMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Highlight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NextState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PreviousState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfStates(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKBUTTONREPRESENTATIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKBUTTONREPRESENTATIONWRAP_CLASSDEF
#endif
};

#endif
