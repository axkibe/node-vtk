/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGRAPHITEMWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGRAPHITEMWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGraphItem.h>

#include "vtkContextItemWrap.h"

class VtkGraphItemWrap : public VtkContextItemWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkGraphItemWrap(vtkSmartPointer<vtkGraphItem>);
		VtkGraphItemWrap();
		~VtkGraphItemWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGraph(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLayout(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGraph(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StartLayoutAnimation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StopLayoutAnimation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdateLayout(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
