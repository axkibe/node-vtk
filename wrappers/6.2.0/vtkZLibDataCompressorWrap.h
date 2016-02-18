/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKZLIBDATACOMPRESSORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKZLIBDATACOMPRESSORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkZLibDataCompressor.h>

#include "vtkDataCompressorWrap.h"
#include "../../plus/plus.h"

class VtkZLibDataCompressorWrap : public VtkDataCompressorWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkZLibDataCompressorWrap(vtkSmartPointer<vtkZLibDataCompressor>);
		VtkZLibDataCompressorWrap();
		~VtkZLibDataCompressorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCompressionLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCompressionLevelMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCompressionLevelMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCompressionLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKZLIBDATACOMPRESSORWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKZLIBDATACOMPRESSORWRAP_CLASSDEF
#endif
};

#endif
