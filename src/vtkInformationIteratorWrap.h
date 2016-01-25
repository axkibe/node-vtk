/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKINFORMATIONITERATORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKINFORMATIONITERATORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkInformationIterator.h>

#include "vtkObjectWrap.h"

class VtkInformationIteratorWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkInformationIteratorWrap(vtkSmartPointer<vtkInformationIterator>);
		VtkInformationIteratorWrap();
		~VtkInformationIteratorWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCurrentKey(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInformation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GoToFirstItem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GoToNextItem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InitTraversal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsDoneWithTraversal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInformation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInformationWeak(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
