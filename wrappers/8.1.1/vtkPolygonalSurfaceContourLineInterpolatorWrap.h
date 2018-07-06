/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPOLYGONALSURFACECONTOURLINEINTERPOLATORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPOLYGONALSURFACECONTOURLINEINTERPOLATORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPolygonalSurfaceContourLineInterpolator.h>

#include "vtkPolyDataContourLineInterpolatorWrap.h"
#include "../../plus/plus.h"

class VtkPolygonalSurfaceContourLineInterpolatorWrap : public VtkPolyDataContourLineInterpolatorWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPolygonalSurfaceContourLineInterpolatorWrap(vtkSmartPointer<vtkPolygonalSurfaceContourLineInterpolator>);
		VtkPolygonalSurfaceContourLineInterpolatorWrap();
		~VtkPolygonalSurfaceContourLineInterpolatorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetContourPointIds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDistanceOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InterpolateLine(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDistanceOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKPOLYGONALSURFACECONTOURLINEINTERPOLATORWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKPOLYGONALSURFACECONTOURLINEINTERPOLATORWRAP_CLASSDEF
#endif
};

#endif