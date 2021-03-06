/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSYNCHRONIZETIMEFILTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSYNCHRONIZETIMEFILTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkSynchronizeTimeFilter.h>

#include "vtkPassInputTypeAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkSynchronizeTimeFilterWrap : public VtkPassInputTypeAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkSynchronizeTimeFilterWrap(vtkSmartPointer<vtkSynchronizeTimeFilter>);
		VtkSynchronizeTimeFilterWrap();
		~VtkSynchronizeTimeFilterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetRelativeTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRelativeToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRelativeToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRelativeTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSourceConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKSYNCHRONIZETIMEFILTERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKSYNCHRONIZETIMEFILTERWRAP_CLASSDEF
#endif
};

#endif
