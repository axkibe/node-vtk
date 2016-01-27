/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTRIANGULARTEXTUREWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTRIANGULARTEXTUREWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTriangularTexture.h>

#include "vtkImageAlgorithmWrap.h"

class VtkTriangularTextureWrap : public VtkImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkTriangularTextureWrap(vtkSmartPointer<vtkTriangularTexture>);
		VtkTriangularTextureWrap();
		~VtkTriangularTextureWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTexturePattern(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTexturePatternMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTexturePatternMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTexturePattern(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetYSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
