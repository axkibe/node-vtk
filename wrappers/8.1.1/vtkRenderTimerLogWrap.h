/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKRENDERTIMERLOGWRAP_H
#define NATIVE_EXTENSION_VTK_VTKRENDERTIMERLOGWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkRenderTimerLog.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkRenderTimerLogWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkRenderTimerLogWrap(vtkSmartPointer<vtkRenderTimerLog>);
		VtkRenderTimerLogWrap();
		~VtkRenderTimerLogWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void FrameReady(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFrameLimit(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLoggingEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsSupported(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LoggingEnabledOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LoggingEnabledOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MarkEndEvent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MarkFrame(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFrameLimit(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLoggingEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKRENDERTIMERLOGWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKRENDERTIMERLOGWRAP_CLASSDEF
#endif
};

#endif