/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKOUTPUTWINDOWWRAP_H
#define NATIVE_EXTENSION_VTK_VTKOUTPUTWINDOWWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkOutputWindow.h>

#include "vtkObjectWrap.h"

class VtkOutputWindowWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkOutputWindowWrap(vtkSmartPointer<vtkOutputWindow>);
		VtkOutputWindowWrap();
		~VtkOutputWindowWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void DisplayDebugText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DisplayErrorText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DisplayGenericWarningText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DisplayText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DisplayWarningText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PromptUserOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PromptUserOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPromptUser(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
