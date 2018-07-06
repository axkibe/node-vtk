/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPROSTARREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPROSTARREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkProStarReader.h>

#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkProStarReaderWrap : public VtkUnstructuredGridAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkProStarReaderWrap(vtkSmartPointer<vtkProStarReader>);
		VtkProStarReaderWrap();
		~VtkProStarReaderWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScaleFactorMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScaleFactorMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKPROSTARREADERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKPROSTARREADERWRAP_CLASSDEF
#endif
};

#endif