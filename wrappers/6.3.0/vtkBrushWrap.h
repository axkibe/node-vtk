/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKBRUSHWRAP_H
#define NATIVE_EXTENSION_VTK_VTKBRUSHWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkBrush.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkBrushWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkBrushWrap(vtkSmartPointer<vtkBrush>);
		VtkBrushWrap();
		~VtkBrushWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetColorF(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOpacityF(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTexture(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextureProperties(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColorF(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOpacityF(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTexture(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTextureProperties(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKBRUSHWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKBRUSHWRAP_CLASSDEF
#endif
};

#endif
