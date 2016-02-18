/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKBOXWIDGET2WRAP_H
#define NATIVE_EXTENSION_VTK_VTKBOXWIDGET2WRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkBoxWidget2.h>

#include "vtkAbstractWidgetWrap.h"
#include "../../plus/plus.h"

class VtkBoxWidget2Wrap : public VtkAbstractWidgetWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkBoxWidget2Wrap(vtkSmartPointer<vtkBoxWidget2>);
		VtkBoxWidget2Wrap();
		~VtkBoxWidget2Wrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CreateDefaultRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMoveFacesEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRotationEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalingEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTranslationEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MoveFacesEnabledOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MoveFacesEnabledOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RotationEnabledOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RotationEnabledOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ScalingEnabledOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ScalingEnabledOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMoveFacesEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRotationEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalingEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTranslationEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TranslationEnabledOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TranslationEnabledOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKBOXWIDGET2WRAP_CLASSDEF
		VTK_NODE_PLUS_VTKBOXWIDGET2WRAP_CLASSDEF
#endif
};

#endif
