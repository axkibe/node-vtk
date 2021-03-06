/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKDATAARRAYSELECTIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKDATAARRAYSELECTIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkDataArraySelection.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkDataArraySelectionWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkDataArraySelectionWrap(vtkSmartPointer<vtkDataArraySelection>);
		VtkDataArraySelectionWrap();
		~VtkDataArraySelectionWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ArrayExists(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ArrayIsEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CopySelections(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DisableAllArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DisableArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EnableAllArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EnableArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetArrayIndex(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetArraySetting(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEnabledArrayIndex(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfArraysEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveAllArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveArrayByIndex(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveArrayByName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKDATAARRAYSELECTIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKDATAARRAYSELECTIONWRAP_CLASSDEF
#endif
};

#endif
