/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTEMPORALARRAYOPERATORFILTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTEMPORALARRAYOPERATORFILTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTemporalArrayOperatorFilter.h>

#include "vtkMultiTimeStepAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkTemporalArrayOperatorFilterWrap : public VtkMultiTimeStepAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkTemporalArrayOperatorFilterWrap(vtkSmartPointer<vtkTemporalArrayOperatorFilter>);
		VtkTemporalArrayOperatorFilterWrap();
		~VtkTemporalArrayOperatorFilterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetFirstTimeStepIndex(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOperator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputArrayNameSuffix(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSecondTimeStepIndex(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFirstTimeStepIndex(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOperator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputArrayNameSuffix(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSecondTimeStepIndex(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKTEMPORALARRAYOPERATORFILTERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKTEMPORALARRAYOPERATORFILTERWRAP_CLASSDEF
#endif
};

#endif
