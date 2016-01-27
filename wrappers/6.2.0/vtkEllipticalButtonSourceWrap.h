/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKELLIPTICALBUTTONSOURCEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKELLIPTICALBUTTONSOURCEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkEllipticalButtonSource.h>

#include "vtkButtonSourceWrap.h"

class VtkEllipticalButtonSourceWrap : public VtkButtonSourceWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkEllipticalButtonSourceWrap(vtkSmartPointer<vtkEllipticalButtonSource>);
		VtkEllipticalButtonSourceWrap();
		~VtkEllipticalButtonSourceWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetCircumferentialResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCircumferentialResolutionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCircumferentialResolutionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDepth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDepthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDepthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHeightMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHeightMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRadialRatio(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRadialRatioMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRadialRatioMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShoulderResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShoulderResolutionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShoulderResolutionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextureResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextureResolutionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextureResolutionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWidthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWidthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCircumferentialResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDepth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRadialRatio(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShoulderResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTextureResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
