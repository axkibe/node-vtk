/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKINTERACTORSTYLERUBBERBANDPICKWRAP_H
#define NATIVE_EXTENSION_VTK_VTKINTERACTORSTYLERUBBERBANDPICKWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkInteractorStyleRubberBandPick.h>

#include "vtkInteractorStyleTrackballCameraWrap.h"
#include "../../plus/plus.h"

class VtkInteractorStyleRubberBandPickWrap : public VtkInteractorStyleTrackballCameraWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkInteractorStyleRubberBandPickWrap(vtkSmartPointer<vtkInteractorStyleRubberBandPick>);
		VtkInteractorStyleRubberBandPickWrap();
		~VtkInteractorStyleRubberBandPickWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnChar(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnLeftButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnLeftButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnMouseMove(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StartSelect(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKINTERACTORSTYLERUBBERBANDPICKWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKINTERACTORSTYLERUBBERBANDPICKWRAP_CLASSDEF
#endif
};

#endif
