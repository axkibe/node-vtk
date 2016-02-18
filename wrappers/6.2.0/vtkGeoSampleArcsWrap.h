/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGEOSAMPLEARCSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGEOSAMPLEARCSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGeoSampleArcs.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkGeoSampleArcsWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkGeoSampleArcsWrap(vtkSmartPointer<vtkGeoSampleArcs>);
		VtkGeoSampleArcsWrap();
		~VtkGeoSampleArcsWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGlobeRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInputCoordinateSystem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumDistanceMeters(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputCoordinateSystem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGlobeRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputCoordinateSystem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputCoordinateSystemToRectangular(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputCoordinateSystemToSpherical(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumDistanceMeters(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputCoordinateSystem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputCoordinateSystemToRectangular(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputCoordinateSystemToSpherical(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKGEOSAMPLEARCSWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKGEOSAMPLEARCSWRAP_CLASSDEF
#endif
};

#endif
