/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKMULTIPROCESSCONTROLLERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKMULTIPROCESSCONTROLLERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkMultiProcessController.h>

#include "vtkObjectWrap.h"

class VtkMultiProcessControllerWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkMultiProcessControllerWrap(vtkSmartPointer<vtkMultiProcessController>);
		VtkMultiProcessControllerWrap();
		~VtkMultiProcessControllerWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AllGather(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AllGatherV(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AllReduce(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Barrier(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Broadcast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CreateSubController(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Gather(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GatherV(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBreakFlag(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBreakRMITag(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCommunicator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGlobalController(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLocalProcessId(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfProcesses(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRMIArgTag(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRMITag(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PartitionController(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ProcessRMIs(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Receive(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReceiveDataObject(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Reduce(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveAllRMICallbacks(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveFirstRMI(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Scatter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Send(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBreakFlag(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGlobalController(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfProcesses(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSingleProcessObject(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TriggerBreakRMIs(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TriggerRMI(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TriggerRMIOnAllChildren(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
