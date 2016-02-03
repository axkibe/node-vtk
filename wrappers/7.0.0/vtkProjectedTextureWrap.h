/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPROJECTEDTEXTUREWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPROJECTEDTEXTUREWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkProjectedTexture.h>

#include "vtkDataSetAlgorithmWrap.h"

class VtkProjectedTextureWrap : public VtkDataSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkProjectedTextureWrap(vtkSmartPointer<vtkProjectedTexture>);
		VtkProjectedTextureWrap();
		~VtkProjectedTextureWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetCameraMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMirrorSeparation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAspectRatio(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCameraMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCameraModeToPinhole(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCameraModeToTwoMirror(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFocalPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMirrorSeparation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUp(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
