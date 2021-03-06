/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCOMMUNICATORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCOMMUNICATORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCommunicator.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkCommunicatorWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCommunicatorWrap(vtkSmartPointer<vtkCommunicator>);
		VtkCommunicatorWrap();
		~VtkCommunicatorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AllGather(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AllGatherV(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AllReduce(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Barrier(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Broadcast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Gather(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GatherV(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLeftChildProcessor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLocalProcessId(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfProcesses(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetParentProcessor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MarshalDataObject(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Receive(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReceiveDataObject(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Reduce(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Scatter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Send(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfProcesses(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UnMarshalDataObject(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCOMMUNICATORWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCOMMUNICATORWRAP_CLASSDEF
#endif
};

#endif
