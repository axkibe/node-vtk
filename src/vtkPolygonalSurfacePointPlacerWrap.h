/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPOLYGONALSURFACEPOINTPLACERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPOLYGONALSURFACEPOINTPLACERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPolygonalSurfacePointPlacer.h>

#include "vtkPolyDataPointPlacerWrap.h"

class VtkPolygonalSurfacePointPlacerWrap : public VtkPolyDataPointPlacerWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkPolygonalSurfacePointPlacerWrap(vtkSmartPointer<vtkPolygonalSurfacePointPlacer>);
		VtkPolygonalSurfacePointPlacerWrap();
		~VtkPolygonalSurfacePointPlacerWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddProp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellPicker(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDistanceOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPolys(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSnapToClosestPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveAllProps(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveViewProp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDistanceOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSnapToClosestPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SnapToClosestPointOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SnapToClosestPointOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
