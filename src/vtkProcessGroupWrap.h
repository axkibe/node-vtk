/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPROCESSGROUPWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPROCESSGROUPWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkProcessGroup.h>

#include "vtkObjectWrap.h"

class VtkProcessGroupWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkProcessGroupWrap(vtkSmartPointer<vtkProcessGroup>);
		VtkProcessGroupWrap();
		~VtkProcessGroupWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddProcessId(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Copy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FindProcessId(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCommunicator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLocalProcessId(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfProcessIds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProcessId(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveAllProcessIds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveProcessId(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCommunicator(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
