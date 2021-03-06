/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGEMEDIAN3DWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGEMEDIAN3DWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageMedian3D.h>

#include "vtkImageSpatialAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkImageMedian3DWrap : public VtkImageSpatialAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageMedian3DWrap(vtkSmartPointer<vtkImageMedian3D>);
		VtkImageMedian3DWrap();
		~VtkImageMedian3DWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetNumberOfElements(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetKernelSize(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKIMAGEMEDIAN3DWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKIMAGEMEDIAN3DWRAP_CLASSDEF
#endif
};

#endif
