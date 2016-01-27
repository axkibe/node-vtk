/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGEMAPTOCOLORSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGEMAPTOCOLORSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageMapToColors.h>

#include "vtkThreadedImageAlgorithmWrap.h"

class VtkImageMapToColorsWrap : public VtkThreadedImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageMapToColorsWrap(vtkSmartPointer<vtkImageMapToColors>);
		VtkImageMapToColorsWrap();
		~VtkImageMapToColorsWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetActiveComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPassAlphaToOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PassAlphaToOutputOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PassAlphaToOutputOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetActiveComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputFormatToLuminance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputFormatToLuminanceAlpha(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputFormatToRGB(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputFormatToRGBA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPassAlphaToOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
