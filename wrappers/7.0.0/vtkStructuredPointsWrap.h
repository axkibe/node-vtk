/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSTRUCTUREDPOINTSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSTRUCTUREDPOINTSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkStructuredPoints.h>

#include "vtkImageDataWrap.h"
#include "../../plus/plus.h"

class VtkStructuredPointsWrap : public VtkImageDataWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkStructuredPointsWrap(vtkSmartPointer<vtkStructuredPoints>);
		VtkStructuredPointsWrap();
		~VtkStructuredPointsWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataObjectType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKSTRUCTUREDPOINTSWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKSTRUCTUREDPOINTSWRAP_CLASSDEF
#endif
};

#endif
