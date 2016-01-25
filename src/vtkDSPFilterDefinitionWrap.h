/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKDSPFILTERDEFINITIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKDSPFILTERDEFINITIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkDSPFilterDefinition.h>

#include "vtkObjectWrap.h"

class VtkDSPFilterDefinitionWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkDSPFilterDefinitionWrap(vtkSmartPointer<vtkDSPFilterDefinition>);
		VtkDSPFilterDefinitionWrap();
		~VtkDSPFilterDefinitionWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void Clear(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Copy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDenominatorWeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetForwardNumeratorWeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInputVariableName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumDenominatorWeights(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumForwardNumeratorWeights(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumNumeratorWeights(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumeratorWeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputVariableName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PushBackDenominatorWeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PushBackForwardNumeratorWeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PushBackNumeratorWeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputVariableName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputVariableName(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
