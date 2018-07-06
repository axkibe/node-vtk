/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKFIBERSURFACEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKFIBERSURFACEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkFiberSurface.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkFiberSurfaceWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkFiberSurfaceWrap(vtkSmartPointer<vtkFiberSurface>);
		VtkFiberSurfaceWrap();
		~VtkFiberSurfaceWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetField1(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetField2(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKFIBERSURFACEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKFIBERSURFACEWRAP_CLASSDEF
#endif
};

#endif