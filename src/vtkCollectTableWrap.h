/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCOLLECTTABLEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCOLLECTTABLEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCollectTable.h>

#include "vtkTableAlgorithmWrap.h"

class VtkCollectTableWrap : public VtkTableAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkCollectTableWrap(vtkSmartPointer<vtkCollectTable>);
		VtkCollectTableWrap();
		~VtkCollectTableWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetController(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPassThrough(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSocketController(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PassThroughOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PassThroughOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetController(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPassThrough(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSocketController(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
