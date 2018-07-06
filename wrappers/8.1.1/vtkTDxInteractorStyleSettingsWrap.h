/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTDXINTERACTORSTYLESETTINGSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTDXINTERACTORSTYLESETTINGSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTDxInteractorStyleSettings.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkTDxInteractorStyleSettingsWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkTDxInteractorStyleSettingsWrap(vtkSmartPointer<vtkTDxInteractorStyleSettings>);
		VtkTDxInteractorStyleSettingsWrap();
		~VtkTDxInteractorStyleSettingsWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetAngleSensitivity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTranslationXSensitivity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTranslationYSensitivity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTranslationZSensitivity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseRotationX(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseRotationY(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseRotationZ(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAngleSensitivity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTranslationXSensitivity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTranslationYSensitivity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTranslationZSensitivity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseRotationX(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseRotationY(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseRotationZ(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKTDXINTERACTORSTYLESETTINGSWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKTDXINTERACTORSTYLESETTINGSWRAP_CLASSDEF
#endif
};

#endif