/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKACTORCOLLECTIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKACTORCOLLECTIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkActorCollection.h>

#include "vtkPropCollectionWrap.h"
#include "../../plus/plus.h"

class VtkActorCollectionWrap : public VtkPropCollectionWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkActorCollectionWrap(vtkSmartPointer<vtkActorCollection>);
		VtkActorCollectionWrap();
		~VtkActorCollectionWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddItem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ApplyProperties(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLastActor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLastItem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNextActor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNextItem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKACTORCOLLECTIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKACTORCOLLECTIONWRAP_CLASSDEF
#endif
};

#endif
