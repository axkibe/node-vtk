/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCONSTRAINEDPOINTHANDLEREPRESENTATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCONSTRAINEDPOINTHANDLEREPRESENTATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkConstrainedPointHandleRepresentation.h>

#include "vtkHandleRepresentationWrap.h"

class VtkConstrainedPointHandleRepresentationWrap : public VtkHandleRepresentationWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkConstrainedPointHandleRepresentationWrap(vtkSmartPointer<vtkConstrainedPointHandleRepresentation>);
		VtkConstrainedPointHandleRepresentationWrap();
		~VtkConstrainedPointHandleRepresentationWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddBoundingPlane(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActiveCursorShape(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActiveProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBoundingPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCursorShape(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetObliquePlane(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProjectionNormal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProjectionNormalMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProjectionNormalMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProjectionPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectedProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Highlight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveAllBoundingPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveBoundingPlane(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetActiveCursorShape(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBoundingPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCursorShape(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetObliquePlane(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProjectionNormal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProjectionNormalToOblique(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProjectionNormalToXAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProjectionNormalToYAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProjectionNormalToZAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProjectionPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
