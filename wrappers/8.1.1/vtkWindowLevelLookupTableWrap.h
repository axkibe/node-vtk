/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKWINDOWLEVELLOOKUPTABLEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKWINDOWLEVELLOOKUPTABLEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkWindowLevelLookupTable.h>

#include "vtkLookupTableWrap.h"
#include "../../plus/plus.h"

class VtkWindowLevelLookupTableWrap : public VtkLookupTableWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkWindowLevelLookupTableWrap(vtkSmartPointer<vtkWindowLevelLookupTable>);
		VtkWindowLevelLookupTableWrap();
		~VtkWindowLevelLookupTableWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void Build(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInverseVideo(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumTableValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinimumTableValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWindow(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InverseVideoOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InverseVideoOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInverseVideo(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumTableValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMinimumTableValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWindow(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKWINDOWLEVELLOOKUPTABLEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKWINDOWLEVELLOOKUPTABLEWRAP_CLASSDEF
#endif
};

#endif
