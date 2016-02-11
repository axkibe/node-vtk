/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKACTOR2DWRAP_H
#define NATIVE_EXTENSION_VTK_VTKACTOR2DWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkActor2D.h>

#include "vtkPropWrap.h"

class VtkActor2DWrap : public VtkPropWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkActor2DWrap(vtkSmartPointer<vtkActor2D>);
		VtkActor2DWrap();
		~VtkActor2DWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetActors2D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActualPosition2Coordinate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActualPositionCoordinate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLayerNumber(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMapper(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPosition2(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPosition2Coordinate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPositionCoordinate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDisplayPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLayerNumber(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMapper(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPosition2(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
