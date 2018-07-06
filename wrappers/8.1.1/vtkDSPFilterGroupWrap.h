/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKDSPFILTERGROUPWRAP_H
#define NATIVE_EXTENSION_VTK_VTKDSPFILTERGROUPWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkDSPFilterGroup.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkDSPFilterGroupWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkDSPFilterGroupWrap(vtkSmartPointer<vtkDSPFilterGroup>);
		VtkDSPFilterGroupWrap();
		~VtkDSPFilterGroupWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddFilter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AddInputVariableInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Copy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCachedInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCachedOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFilter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInputVariableName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumFilters(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsThisInputVariableInstanceCached(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsThisInputVariableInstanceNeeded(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveFilter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKDSPFILTERGROUPWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKDSPFILTERGROUPWRAP_CLASSDEF
#endif
};

#endif