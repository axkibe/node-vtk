/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKBOUNDEDPLANEPOINTPLACERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKBOUNDEDPLANEPOINTPLACERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkBoundedPlanePointPlacer.h>

#include "vtkPointPlacerWrap.h"
#include "../../plus/plus.h"

class VtkBoundedPlanePointPlacerWrap : public VtkPointPlacerWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkBoundedPlanePointPlacerWrap(vtkSmartPointer<vtkBoundedPlanePointPlacer>);
		VtkBoundedPlanePointPlacerWrap();
		~VtkBoundedPlanePointPlacerWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddBoundingPlane(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeWorldPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBoundingPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetObliquePlane(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProjectionNormal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProjectionNormalMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProjectionNormalMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProjectionPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveAllBoundingPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveBoundingPlane(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBoundingPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetObliquePlane(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProjectionNormal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProjectionNormalToOblique(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProjectionNormalToXAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProjectionNormalToYAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProjectionNormalToZAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProjectionPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdateWorldPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ValidateWorldPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKBOUNDEDPLANEPOINTPLACERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKBOUNDEDPLANEPOINTPLACERWRAP_CLASSDEF
#endif
};

#endif
