/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGEOSPHERETRANSFORMWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGEOSPHERETRANSFORMWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGeoSphereTransform.h>

#include "vtkAbstractTransformWrap.h"
#include "../../plus/plus.h"

class VtkGeoSphereTransformWrap : public VtkAbstractTransformWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkGeoSphereTransformWrap(vtkSmartPointer<vtkGeoSphereTransform>);
		VtkGeoSphereTransformWrap();
		~VtkGeoSphereTransformWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetBaseAltitude(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetToRectangular(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InternalTransformPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Inverse(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MakeTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBaseAltitude(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetToRectangular(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ToRectangularOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ToRectangularOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKGEOSPHERETRANSFORMWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKGEOSPHERETRANSFORMWRAP_CLASSDEF
#endif
};

#endif
