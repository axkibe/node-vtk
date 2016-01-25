/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKRENDERPASSCOLLECTIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKRENDERPASSCOLLECTIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkRenderPassCollection.h>

#include "vtkCollectionWrap.h"

class VtkRenderPassCollectionWrap : public VtkCollectionWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkRenderPassCollectionWrap(vtkSmartPointer<vtkRenderPassCollection>);
		VtkRenderPassCollectionWrap();
		~VtkRenderPassCollectionWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddItem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLastRenderPass(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNextRenderPass(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif