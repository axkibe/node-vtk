/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCOINCIDENTTOPOLOGYRESOLUTIONPAINTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCOINCIDENTTOPOLOGYRESOLUTIONPAINTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCoincidentTopologyResolutionPainter.h>

#include "vtkPolyDataPainterWrap.h"
#include "../../plus/plus.h"

class VtkCoincidentTopologyResolutionPainterWrap : public VtkPolyDataPainterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCoincidentTopologyResolutionPainterWrap(vtkSmartPointer<vtkCoincidentTopologyResolutionPainter>);
		VtkCoincidentTopologyResolutionPainterWrap();
		~VtkCoincidentTopologyResolutionPainterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void POLYGON_OFFSET_FACES(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void POLYGON_OFFSET_PARAMETERS(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RESOLVE_COINCIDENT_TOPOLOGY(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Z_SHIFT(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCOINCIDENTTOPOLOGYRESOLUTIONPAINTERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCOINCIDENTTOPOLOGYRESOLUTIONPAINTERWRAP_CLASSDEF
#endif
};

#endif
