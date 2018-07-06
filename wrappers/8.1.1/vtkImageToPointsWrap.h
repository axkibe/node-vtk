/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGETOPOINTSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGETOPOINTSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageToPoints.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkImageToPointsWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageToPointsWrap(vtkSmartPointer<vtkImageToPoints>);
		VtkImageToPointsWrap();
		~VtkImageToPointsWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStencilConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStencilConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStencilData(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKIMAGETOPOINTSWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKIMAGETOPOINTSWRAP_CLASSDEF
#endif
};

#endif