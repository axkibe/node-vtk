/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGEOGRATICULEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGEOGRATICULEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGeoGraticule.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkGeoGraticuleWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkGeoGraticuleWrap(vtkSmartPointer<vtkGeoGraticule>);
		VtkGeoGraticuleWrap();
		~VtkGeoGraticuleWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetGeometryType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLatitudeBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLatitudeDelta(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLatitudeLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLatitudeLevelMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLatitudeLevelMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLongitudeBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLongitudeDelta(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLongitudeLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLongitudeLevelMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLongitudeLevelMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGeometryType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLatitudeBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLatitudeLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLongitudeBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLongitudeLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKGEOGRATICULEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKGEOGRATICULEWRAP_CLASSDEF
#endif
};

#endif
