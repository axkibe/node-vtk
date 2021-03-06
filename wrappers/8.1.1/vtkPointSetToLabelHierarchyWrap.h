/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPOINTSETTOLABELHIERARCHYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPOINTSETTOLABELHIERARCHYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPointSetToLabelHierarchy.h>

#include "vtkLabelHierarchyAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkPointSetToLabelHierarchyWrap : public VtkLabelHierarchyAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPointSetToLabelHierarchyWrap(vtkSmartPointer<vtkPointSetToLabelHierarchy>);
		VtkPointSetToLabelHierarchyWrap();
		~VtkPointSetToLabelHierarchyWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetBoundedSizeArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIconIndexArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumDepth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrientationArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPriorityArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSizeArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTargetLabelCount(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseUnicodeStrings(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBoundedSizeArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIconIndexArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumDepth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrientationArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPriorityArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSizeArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTargetLabelCount(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseUnicodeStrings(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseUnicodeStringsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseUnicodeStringsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKPOINTSETTOLABELHIERARCHYWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKPOINTSETTOLABELHIERARCHYWRAP_CLASSDEF
#endif
};

#endif
