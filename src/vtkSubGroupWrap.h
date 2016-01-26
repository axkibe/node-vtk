/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSUBGROUPWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSUBGROUPWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkSubGroup.h>

#include "vtkObjectWrap.h"

class VtkSubGroupWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkSubGroupWrap(vtkSmartPointer<vtkSubGroup>);
		VtkSubGroupWrap();
		~VtkSubGroupWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void Barrier(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Broadcast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Gather(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PrintSubGroup(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void getLocalRank(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void setGatherPattern(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
