/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCOLLECTIONITERATORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCOLLECTIONITERATORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCollectionIterator.h>

#include "vtkObjectWrap.h"

class VtkCollectionIteratorWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCollectionIteratorWrap(vtkSmartPointer<vtkCollectionIterator>);
		VtkCollectionIteratorWrap();
		~VtkCollectionIteratorWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCollection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCurrentObject(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GoToFirstItem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GoToNextItem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InitTraversal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsDoneWithTraversal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCollection(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
