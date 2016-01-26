/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPOLYDATACOLLECTIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPOLYDATACOLLECTIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPolyDataCollection.h>

#include "vtkCollectionWrap.h"

class VtkPolyDataCollectionWrap : public VtkCollectionWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPolyDataCollectionWrap(vtkSmartPointer<vtkPolyDataCollection>);
		VtkPolyDataCollectionWrap();
		~VtkPolyDataCollectionWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddItem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNextItem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
