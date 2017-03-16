/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKKDTREESELECTORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKKDTREESELECTORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkKdTreeSelector.h>

#include "vtkSelectionAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkKdTreeSelectorWrap : public VtkSelectionAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkKdTreeSelectorWrap(vtkSmartPointer<vtkKdTreeSelector>);
		VtkKdTreeSelectorWrap();
		~VtkKdTreeSelectorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetKdTree(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectionAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectionBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectionFieldName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSingleSelection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSingleSelectionThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetKdTree(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectionAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectionBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectionFieldName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSingleSelection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSingleSelectionThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SingleSelectionOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SingleSelectionOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKKDTREESELECTORWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKKDTREESELECTORWRAP_CLASSDEF
#endif
};

#endif
