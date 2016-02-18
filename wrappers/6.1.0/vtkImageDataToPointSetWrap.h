/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGEDATATOPOINTSETWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGEDATATOPOINTSETWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageDataToPointSet.h>

#include "vtkStructuredGridAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkImageDataToPointSetWrap : public VtkStructuredGridAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageDataToPointSetWrap(vtkSmartPointer<vtkImageDataToPointSet>);
		VtkImageDataToPointSetWrap();
		~VtkImageDataToPointSetWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKIMAGEDATATOPOINTSETWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKIMAGEDATATOPOINTSETWRAP_CLASSDEF
#endif
};

#endif
