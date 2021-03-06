/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGESKELETON2DWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGESKELETON2DWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageSkeleton2D.h>

#include "vtkImageIterateFilterWrap.h"
#include "../../plus/plus.h"

class VtkImageSkeleton2DWrap : public VtkImageIterateFilterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageSkeleton2DWrap(vtkSmartPointer<vtkImageSkeleton2D>);
		VtkImageSkeleton2DWrap();
		~VtkImageSkeleton2DWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetPrune(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PruneOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PruneOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfIterations(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPrune(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKIMAGESKELETON2DWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKIMAGESKELETON2DWRAP_CLASSDEF
#endif
};

#endif
