/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTIMERLOGWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTIMERLOGWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTimerLog.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkTimerLogWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkTimerLogWrap(vtkSmartPointer<vtkTimerLog>);
		VtkTimerLogWrap();
		~VtkTimerLogWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AllocateLog(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CleanupLog(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DumpLog(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FormatAndMarkEvent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCPUTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetElapsedTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEventIndent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEventString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEventWallTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLogging(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaxEntries(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfEvents(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUniversalTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InsertTimedEvent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LoggingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LoggingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MarkEndEvent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MarkEvent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MarkStartEvent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ResetLog(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLogging(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaxEntries(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StartTimer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StopTimer(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKTIMERLOGWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKTIMERLOGWRAP_CLASSDEF
#endif
};

#endif
