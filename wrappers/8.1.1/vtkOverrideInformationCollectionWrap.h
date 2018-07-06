/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKOVERRIDEINFORMATIONCOLLECTIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKOVERRIDEINFORMATIONCOLLECTIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkOverrideInformationCollection.h>

#include "vtkCollectionWrap.h"
#include "../../plus/plus.h"

class VtkOverrideInformationCollectionWrap : public VtkCollectionWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkOverrideInformationCollectionWrap(vtkSmartPointer<vtkOverrideInformationCollection>);
		VtkOverrideInformationCollectionWrap();
		~VtkOverrideInformationCollectionWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddItem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNextItem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKOVERRIDEINFORMATIONCOLLECTIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKOVERRIDEINFORMATIONCOLLECTIONWRAP_CLASSDEF
#endif
};

#endif