/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKAREALAYOUTWRAP_H
#define NATIVE_EXTENSION_VTK_VTKAREALAYOUTWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAreaLayout.h>

#include "vtkTreeAlgorithmWrap.h"

class VtkAreaLayoutWrap : public VtkTreeAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkAreaLayoutWrap(vtkSmartPointer<vtkAreaLayout>);
		VtkAreaLayoutWrap();
		~VtkAreaLayoutWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void EdgeRoutingPointsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EdgeRoutingPointsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAreaArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLayoutStrategy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAreaArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLayoutStrategy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSizeArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif