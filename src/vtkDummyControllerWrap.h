/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKDUMMYCONTROLLERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKDUMMYCONTROLLERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkDummyController.h>

#include "vtkMultiProcessControllerWrap.h"

class VtkDummyControllerWrap : public VtkMultiProcessControllerWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkDummyControllerWrap(vtkSmartPointer<vtkDummyController>);
		VtkDummyControllerWrap();
		~VtkDummyControllerWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CreateOutputWindow(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Finalize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCommunicator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLocalProcessId(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRMICommunicator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MultipleMethodExecute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCommunicator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRMICommunicator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SingleMethodExecute(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
