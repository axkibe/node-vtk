/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCONTEXTCLIPWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCONTEXTCLIPWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkContextClip.h>

#include "vtkAbstractContextItemWrap.h"
#include "../../plus/plus.h"

class VtkContextClipWrap : public VtkAbstractContextItemWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkContextClipWrap(vtkSmartPointer<vtkContextClip>);
		VtkContextClipWrap();
		~VtkContextClipWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetHeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRect(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetX(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetY(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Paint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetClip(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Update(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCONTEXTCLIPWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCONTEXTCLIPWRAP_CLASSDEF
#endif
};

#endif
