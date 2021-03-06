/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKAFFINEREPRESENTATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKAFFINEREPRESENTATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAffineRepresentation.h>

#include "vtkWidgetRepresentationWrap.h"
#include "../../plus/plus.h"

class VtkAffineRepresentationWrap : public VtkWidgetRepresentationWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkAffineRepresentationWrap(vtkSmartPointer<vtkAffineRepresentation>);
		VtkAffineRepresentationWrap();
		~VtkAffineRepresentationWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKAFFINEREPRESENTATIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKAFFINEREPRESENTATIONWRAP_CLASSDEF
#endif
};

#endif
