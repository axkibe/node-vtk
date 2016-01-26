/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKLABELHIERARCHYITERATORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKLABELHIERARCHYITERATORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkLabelHierarchyIterator.h>

#include "vtkObjectWrap.h"

class VtkLabelHierarchyIteratorWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkLabelHierarchyIteratorWrap(vtkSmartPointer<vtkLabelHierarchyIterator>);
		VtkLabelHierarchyIteratorWrap();
		~VtkLabelHierarchyIteratorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void Begin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BoxAllNodes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BoxNode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAllBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHierarchy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Next(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAllBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTraversedBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
