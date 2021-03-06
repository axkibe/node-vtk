/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKINTERACTORSTYLE3DWRAP_H
#define NATIVE_EXTENSION_VTK_VTKINTERACTORSTYLE3DWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkInteractorStyle3D.h>

#include "vtkInteractorStyleWrap.h"
#include "../../plus/plus.h"

class VtkInteractorStyle3DWrap : public VtkInteractorStyleWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkInteractorStyle3DWrap(vtkSmartPointer<vtkInteractorStyle3D>);
		VtkInteractorStyle3DWrap();
		~VtkInteractorStyle3DWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetDollyMotionFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInteractionPicker(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDollyMotionFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScale(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKINTERACTORSTYLE3DWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKINTERACTORSTYLE3DWRAP_CLASSDEF
#endif
};

#endif
