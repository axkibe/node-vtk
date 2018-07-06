/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKFOCALPLANEPOINTPLACERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKFOCALPLANEPOINTPLACERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkFocalPlanePointPlacer.h>

#include "vtkPointPlacerWrap.h"
#include "../../plus/plus.h"

class VtkFocalPlanePointPlacerWrap : public VtkPointPlacerWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkFocalPlanePointPlacerWrap(vtkSmartPointer<vtkFocalPlanePointPlacer>);
		VtkFocalPlanePointPlacerWrap();
		~VtkFocalPlanePointPlacerWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ComputeWorldPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPointBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ValidateWorldPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKFOCALPLANEPOINTPLACERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKFOCALPLANEPOINTPLACERWRAP_CLASSDEF
#endif
};

#endif
