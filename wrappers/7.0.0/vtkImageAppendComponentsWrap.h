/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGEAPPENDCOMPONENTSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGEAPPENDCOMPONENTSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageAppendComponents.h>

#include "vtkThreadedImageAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkImageAppendComponentsWrap : public VtkThreadedImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageAppendComponentsWrap(vtkSmartPointer<vtkImageAppendComponents>);
		VtkImageAppendComponentsWrap();
		~VtkImageAppendComponentsWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfInputs(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReplaceNthInputConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKIMAGEAPPENDCOMPONENTSWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKIMAGEAPPENDCOMPONENTSWRAP_CLASSDEF
#endif
};

#endif
