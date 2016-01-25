/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKABSTRACTCONTEXTITEMWRAP_H
#define NATIVE_EXTENSION_VTK_VTKABSTRACTCONTEXTITEMWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAbstractContextItem.h>

#include "vtkObjectWrap.h"

class VtkAbstractContextItemWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkAbstractContextItemWrap(vtkSmartPointer<vtkAbstractContextItem>);
		VtkAbstractContextItemWrap();
		~VtkAbstractContextItemWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ClearItems(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetParent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScene(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetParent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScene(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Update(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif