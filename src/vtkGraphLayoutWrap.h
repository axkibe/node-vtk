/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGRAPHLAYOUTWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGRAPHLAYOUTWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGraphLayout.h>

#include "vtkGraphAlgorithmWrap.h"

class VtkGraphLayoutWrap : public VtkGraphAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkGraphLayoutWrap(vtkSmartPointer<vtkGraphLayout>);
		VtkGraphLayoutWrap();
		~VtkGraphLayoutWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLayoutStrategy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsLayoutComplete(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLayoutStrategy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetZRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseTransformOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseTransformOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
