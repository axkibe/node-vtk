/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKLZ4DATACOMPRESSORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKLZ4DATACOMPRESSORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkLZ4DataCompressor.h>

#include "vtkDataCompressorWrap.h"
#include "../../plus/plus.h"

class VtkLZ4DataCompressorWrap : public VtkDataCompressorWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkLZ4DataCompressorWrap(vtkSmartPointer<vtkLZ4DataCompressor>);
		VtkLZ4DataCompressorWrap();
		~VtkLZ4DataCompressorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetAccelerationLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAccelerationLevelMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAccelerationLevelMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAccelerationLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKLZ4DATACOMPRESSORWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKLZ4DATACOMPRESSORWRAP_CLASSDEF
#endif
};

#endif