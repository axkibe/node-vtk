/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKVOXELCONTOURSTOSURFACEFILTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKVOXELCONTOURSTOSURFACEFILTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkVoxelContoursToSurfaceFilter.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkVoxelContoursToSurfaceFilterWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkVoxelContoursToSurfaceFilterWrap(vtkSmartPointer<vtkVoxelContoursToSurfaceFilter>);
		VtkVoxelContoursToSurfaceFilterWrap();
		~VtkVoxelContoursToSurfaceFilterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetMemoryLimitInBytes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMemoryLimitInBytes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKVOXELCONTOURSTOSURFACEFILTERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKVOXELCONTOURSTOSURFACEFILTERWRAP_CLASSDEF
#endif
};

#endif
