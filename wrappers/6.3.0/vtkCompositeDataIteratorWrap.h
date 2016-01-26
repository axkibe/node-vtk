/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCOMPOSITEDATAITERATORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCOMPOSITEDATAITERATORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCompositeDataIterator.h>

#include "vtkObjectWrap.h"

class VtkCompositeDataIteratorWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCompositeDataIteratorWrap(vtkSmartPointer<vtkCompositeDataIterator>);
		VtkCompositeDataIteratorWrap();
		~VtkCompositeDataIteratorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCurrentDataObject(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCurrentMetaData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataSet(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetReverse(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSkipEmptyNodes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GoToFirstItem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GoToNextItem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasCurrentMetaData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InitReverseTraversal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InitTraversal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsDoneWithTraversal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataSet(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSkipEmptyNodes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SkipEmptyNodesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SkipEmptyNodesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
