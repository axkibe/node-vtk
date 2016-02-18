/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSOCKETCOMMUNICATORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSOCKETCOMMUNICATORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkSocketCommunicator.h>

#include "vtkCommunicatorWrap.h"
#include "../../plus/plus.h"

class VtkSocketCommunicatorWrap : public VtkCommunicatorWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkSocketCommunicatorWrap(vtkSmartPointer<vtkSocketCommunicator>);
		VtkSocketCommunicatorWrap();
		~VtkSocketCommunicatorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void Barrier(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BufferCurrentMessage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ClientSideHandshake(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CloseConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ConnectTo(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIsConnected(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIsServer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPerformHandshake(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPerformHandshakeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPerformHandshakeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetReportErrors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSocket(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSwapBytesInReceivedData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVersion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Handshake(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasBufferredMessages(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LogToFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PerformHandshakeOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PerformHandshakeOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ServerSideHandshake(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfProcesses(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPerformHandshake(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetReportErrors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSocket(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WaitForConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKSOCKETCOMMUNICATORWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKSOCKETCOMMUNICATORWRAP_CLASSDEF
#endif
};

#endif
