/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGEOTERRAIN2DWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGEOTERRAIN2DWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGeoTerrain2D.h>

#include "vtkGeoTerrainWrap.h"
#include "../../plus/plus.h"

class VtkGeoTerrain2DWrap : public VtkGeoTerrainWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkGeoTerrain2DWrap(vtkSmartPointer<vtkGeoTerrain2D>);
		VtkGeoTerrain2DWrap();
		~VtkGeoTerrain2DWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetLocationTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextureTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLocationTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTextureTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKGEOTERRAIN2DWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKGEOTERRAIN2DWRAP_CLASSDEF
#endif
};

#endif
