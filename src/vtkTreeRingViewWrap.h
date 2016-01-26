/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTREERINGVIEWWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTREERINGVIEWWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTreeRingView.h>

#include "vtkTreeAreaViewWrap.h"

class VtkTreeRingViewWrap : public VtkTreeAreaViewWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkTreeRingViewWrap(vtkSmartPointer<vtkTreeRingView>);
		VtkTreeRingViewWrap();
		~VtkTreeRingViewWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInteriorLogSpacingValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInteriorRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLayerThickness(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RootAtCenterOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RootAtCenterOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInteriorLogSpacingValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInteriorRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLayerThickness(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRootAngles(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
