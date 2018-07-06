/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKDUMMYCOMMUNICATORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKDUMMYCOMMUNICATORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkDummyCommunicator.h>

#include "vtkCommunicatorWrap.h"
#include "../../plus/plus.h"

class VtkDummyCommunicatorWrap : public VtkCommunicatorWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkDummyCommunicatorWrap(vtkSmartPointer<vtkDummyCommunicator>);
		VtkDummyCommunicatorWrap();
		~VtkDummyCommunicatorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKDUMMYCOMMUNICATORWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKDUMMYCOMMUNICATORWRAP_CLASSDEF
#endif
};

#endif