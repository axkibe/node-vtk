/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPMASKPOINTSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPMASKPOINTSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPMaskPoints.h>

#include "vtkMaskPointsWrap.h"
#include "../../plus/plus.h"

class VtkPMaskPointsWrap : public VtkMaskPointsWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPMaskPointsWrap(vtkSmartPointer<vtkPMaskPoints>);
		VtkPMaskPointsWrap();
		~VtkPMaskPointsWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetController(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetController(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKPMASKPOINTSWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKPMASKPOINTSWRAP_CLASSDEF
#endif
};

#endif
