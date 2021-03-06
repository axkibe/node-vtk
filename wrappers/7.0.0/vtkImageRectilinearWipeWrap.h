/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGERECTILINEARWIPEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGERECTILINEARWIPEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageRectilinearWipe.h>

#include "vtkThreadedImageAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkImageRectilinearWipeWrap : public VtkThreadedImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageRectilinearWipeWrap(vtkSmartPointer<vtkImageRectilinearWipe>);
		VtkImageRectilinearWipeWrap();
		~VtkImageRectilinearWipeWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWipe(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWipeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWipeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInput1Data(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInput2Data(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWipe(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWipeToHorizontal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWipeToLowerLeft(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWipeToLowerRight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWipeToQuad(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWipeToUpperLeft(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWipeToUpperRight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWipeToVertical(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKIMAGERECTILINEARWIPEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKIMAGERECTILINEARWIPEWRAP_CLASSDEF
#endif
};

#endif
