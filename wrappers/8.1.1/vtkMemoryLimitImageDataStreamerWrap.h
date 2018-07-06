/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKMEMORYLIMITIMAGEDATASTREAMERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKMEMORYLIMITIMAGEDATASTREAMERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkMemoryLimitImageDataStreamer.h>

#include "vtkImageDataStreamerWrap.h"
#include "../../plus/plus.h"

class VtkMemoryLimitImageDataStreamerWrap : public VtkImageDataStreamerWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkMemoryLimitImageDataStreamerWrap(vtkSmartPointer<vtkMemoryLimitImageDataStreamer>);
		VtkMemoryLimitImageDataStreamerWrap();
		~VtkMemoryLimitImageDataStreamerWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetMemoryLimit(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMemoryLimit(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKMEMORYLIMITIMAGEDATASTREAMERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKMEMORYLIMITIMAGEDATASTREAMERWRAP_CLASSDEF
#endif
};

#endif
