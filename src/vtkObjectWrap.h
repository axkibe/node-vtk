/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKOBJECTWRAP_H
#define NATIVE_EXTENSION_VTK_VTKOBJECTWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkObject.h>

#include "vtkObjectBaseWrap.h"

class VtkObjectWrap : public VtkObjectBaseWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkObjectWrap(vtkSmartPointer<vtkObject>);
		VtkObjectWrap();
		~VtkObjectWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BreakOnError(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DebugOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DebugOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGlobalWarningDisplay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GlobalWarningDisplayOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GlobalWarningDisplayOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasObserver(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InvokeEvent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Modified(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveAllObservers(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveObserver(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveObservers(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGlobalWarningDisplay(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
