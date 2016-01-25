/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSUBPIXELPOSITIONEDGELSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSUBPIXELPOSITIONEDGELSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkSubPixelPositionEdgels.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkSubPixelPositionEdgelsWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkSubPixelPositionEdgelsWrap(vtkSmartPointer<vtkSubPixelPositionEdgels>);
		VtkSubPixelPositionEdgelsWrap();
		~VtkSubPixelPositionEdgelsWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGradMaps(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTargetFlag(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTargetValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGradMapsData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTargetFlag(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTargetValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TargetFlagOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TargetFlagOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
