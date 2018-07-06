/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCOMMANDWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCOMMANDWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCommand.h>

#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

class VtkCommandWrap : public VtkObjectBaseWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCommandWrap(vtkSmartPointer<vtkCommand>);
		VtkCommandWrap();
		~VtkCommandWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AbortFlagOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AbortFlagOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EventHasData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAbortFlag(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEventIdFromString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPassiveObserver(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStringFromEventId(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PassiveObserverOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PassiveObserverOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAbortFlag(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPassiveObserver(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCOMMANDWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCOMMANDWRAP_CLASSDEF
#endif
};

#endif
