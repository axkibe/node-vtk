/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSIMPLEMOTIONBLURPASSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSIMPLEMOTIONBLURPASSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkSimpleMotionBlurPass.h>

#include "vtkDepthImageProcessingPassWrap.h"
#include "../../plus/plus.h"

class VtkSimpleMotionBlurPassWrap : public VtkDepthImageProcessingPassWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkSimpleMotionBlurPassWrap(vtkSmartPointer<vtkSimpleMotionBlurPass>);
		VtkSimpleMotionBlurPassWrap();
		~VtkSimpleMotionBlurPassWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetSubFrames(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColorFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDepthFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSubFrames(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKSIMPLEMOTIONBLURPASSWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKSIMPLEMOTIONBLURPASSWRAP_CLASSDEF
#endif
};

#endif
