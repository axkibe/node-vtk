/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKMULTITHREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKMULTITHREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkMultiThreader.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkMultiThreaderWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkMultiThreaderWrap(vtkSmartPointer<vtkMultiThreader>);
		VtkMultiThreaderWrap();
		~VtkMultiThreaderWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetGlobalDefaultNumberOfThreads(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGlobalMaximumNumberOfThreads(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfThreads(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfThreadsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfThreadsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MultipleMethodExecute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGlobalDefaultNumberOfThreads(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGlobalMaximumNumberOfThreads(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfThreads(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SingleMethodExecute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TerminateThread(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKMULTITHREADERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKMULTITHREADERWRAP_CLASSDEF
#endif
};

#endif
