/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKRENDERPASSCOLLECTIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKRENDERPASSCOLLECTIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkRenderPassCollection.h>

#include "vtkCollectionWrap.h"
#include "../../plus/plus.h"

class VtkRenderPassCollectionWrap : public VtkCollectionWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkRenderPassCollectionWrap(vtkSmartPointer<vtkRenderPassCollection>);
		VtkRenderPassCollectionWrap();
		~VtkRenderPassCollectionWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddItem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLastRenderPass(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNextRenderPass(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKRENDERPASSCOLLECTIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKRENDERPASSCOLLECTIONWRAP_CLASSDEF
#endif
};

#endif