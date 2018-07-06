/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPERIODICFILTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPERIODICFILTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPeriodicFilter.h>

#include "vtkMultiBlockDataSetAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkPeriodicFilterWrap : public VtkMultiBlockDataSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPeriodicFilterWrap(vtkSmartPointer<vtkPeriodicFilter>);
		VtkPeriodicFilterWrap();
		~VtkPeriodicFilterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddIndex(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIterationMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIterationModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIterationModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPeriods(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveAllIndices(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveIndex(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIterationMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIterationModeToDirectNb(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIterationModeToMax(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfPeriods(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKPERIODICFILTERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKPERIODICFILTERWRAP_CLASSDEF
#endif
};

#endif
