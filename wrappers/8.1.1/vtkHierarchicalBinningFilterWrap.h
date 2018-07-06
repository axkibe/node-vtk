/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKHIERARCHICALBINNINGFILTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKHIERARCHICALBINNINGFILTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkHierarchicalBinningFilter.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkHierarchicalBinningFilterWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkHierarchicalBinningFilterWrap(vtkSmartPointer<vtkHierarchicalBinningFilter>);
		VtkHierarchicalBinningFilterWrap();
		~VtkHierarchicalBinningFilterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AutomaticOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AutomaticOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAutomatic(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBinBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDivisions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLocalBinBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfBins(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfGlobalBins(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfLevels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfLevelsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfLevelsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAutomatic(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDivisions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfLevels(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKHIERARCHICALBINNINGFILTERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKHIERARCHICALBINNINGFILTERWRAP_CLASSDEF
#endif
};

#endif