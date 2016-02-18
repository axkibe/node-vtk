/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGEBLENDWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGEBLENDWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageBlend.h>

#include "vtkThreadedImageAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkImageBlendWrap : public VtkThreadedImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageBlendWrap(vtkSmartPointer<vtkImageBlend>);
		VtkImageBlendWrap();
		~VtkImageBlendWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetBlendMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBlendModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBlendModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBlendModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCompoundThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfInputs(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStencil(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReplaceNthInputConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBlendMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBlendModeToCompound(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBlendModeToNormal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCompoundThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStencilConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStencilData(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKIMAGEBLENDWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKIMAGEBLENDWRAP_CLASSDEF
#endif
};

#endif
