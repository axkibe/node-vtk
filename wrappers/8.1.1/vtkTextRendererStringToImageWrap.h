/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTEXTRENDERERSTRINGTOIMAGEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTEXTRENDERERSTRINGTOIMAGEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTextRendererStringToImage.h>

#include "vtkStringToImageWrap.h"
#include "../../plus/plus.h"

class VtkTextRendererStringToImageWrap : public VtkStringToImageWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkTextRendererStringToImageWrap(vtkSmartPointer<vtkTextRendererStringToImage>);
		VtkTextRendererStringToImageWrap();
		~VtkTextRendererStringToImageWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScaleToPowerOfTwo(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKTEXTRENDERERSTRINGTOIMAGEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKTEXTRENDERERSTRINGTOIMAGEWRAP_CLASSDEF
#endif
};

#endif
