/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPROPCOLLECTIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPROPCOLLECTIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPropCollection.h>

#include "vtkCollectionWrap.h"
#include "../../plus/plus.h"

class VtkPropCollectionWrap : public VtkCollectionWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPropCollectionWrap(vtkSmartPointer<vtkPropCollection>);
		VtkPropCollectionWrap();
		~VtkPropCollectionWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddItem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLastProp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNextProp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPaths(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKPROPCOLLECTIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKPROPCOLLECTIONWRAP_CLASSDEF
#endif
};

#endif
