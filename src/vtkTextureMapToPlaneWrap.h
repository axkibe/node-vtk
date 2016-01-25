/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTEXTUREMAPTOPLANEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTEXTUREMAPTOPLANEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTextureMapToPlane.h>

#include "vtkDataSetAlgorithmWrap.h"

class VtkTextureMapToPlaneWrap : public VtkDataSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkTextureMapToPlaneWrap(vtkSmartPointer<vtkTextureMapToPlane>);
		VtkTextureMapToPlaneWrap();
		~VtkTextureMapToPlaneWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AutomaticPlaneGenerationOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AutomaticPlaneGenerationOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAutomaticPlaneGeneration(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAutomaticPlaneGeneration(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNormal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPoint1(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPoint2(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
