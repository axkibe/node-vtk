/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSOCKETCONTROLLERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSOCKETCONTROLLERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkSocketController.h>

#include "vtkMultiProcessControllerWrap.h"
#include "../../plus/plus.h"

class VtkSocketControllerWrap : public VtkMultiProcessControllerWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkSocketControllerWrap(vtkSmartPointer<vtkSocketController>);
		VtkSocketControllerWrap();
		~VtkSocketControllerWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CloseConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ConnectTo(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CreateCompliantController(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CreateOutputWindow(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Finalize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSwapBytesInReceivedData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MultipleMethodExecute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCommunicator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SingleMethodExecute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WaitForConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKSOCKETCONTROLLERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKSOCKETCONTROLLERWRAP_CLASSDEF
#endif
};

#endif
