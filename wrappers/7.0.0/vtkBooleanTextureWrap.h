/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKBOOLEANTEXTUREWRAP_H
#define NATIVE_EXTENSION_VTK_VTKBOOLEANTEXTUREWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkBooleanTexture.h>

#include "vtkImageAlgorithmWrap.h"

class VtkBooleanTextureWrap : public VtkImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkBooleanTextureWrap(vtkSmartPointer<vtkBooleanTexture>);
		VtkBooleanTextureWrap();
		~VtkBooleanTextureWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetThickness(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetThickness(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetYSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
