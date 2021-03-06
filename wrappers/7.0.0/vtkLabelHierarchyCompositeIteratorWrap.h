/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKLABELHIERARCHYCOMPOSITEITERATORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKLABELHIERARCHYCOMPOSITEITERATORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkLabelHierarchyCompositeIterator.h>

#include "vtkLabelHierarchyIteratorWrap.h"
#include "../../plus/plus.h"

class VtkLabelHierarchyCompositeIteratorWrap : public VtkLabelHierarchyIteratorWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkLabelHierarchyCompositeIteratorWrap(vtkSmartPointer<vtkLabelHierarchyCompositeIterator>);
		VtkLabelHierarchyCompositeIteratorWrap();
		~VtkLabelHierarchyCompositeIteratorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddIterator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Begin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BoxAllNodes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BoxNode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ClearIterators(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHierarchy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsAtEnd(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Next(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKLABELHIERARCHYCOMPOSITEITERATORWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKLABELHIERARCHYCOMPOSITEITERATORWRAP_CLASSDEF
#endif
};

#endif
