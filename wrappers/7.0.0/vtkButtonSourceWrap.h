/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKBUTTONSOURCEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKBUTTONSOURCEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkButtonSource.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkButtonSourceWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkButtonSourceWrap(vtkSmartPointer<vtkButtonSource>);
		VtkButtonSourceWrap();
		~VtkButtonSourceWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShoulderTextureCoordinate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextureDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextureStyle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextureStyleMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextureStyleMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTwoSided(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShoulderTextureCoordinate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTextureDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTextureStyle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTextureStyleToFitImage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTextureStyleToProportional(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTwoSided(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TwoSidedOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TwoSidedOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
