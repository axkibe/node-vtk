/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCOINCIDENTTOPOLOGYRESOLUTIONPAINTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCOINCIDENTTOPOLOGYRESOLUTIONPAINTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCoincidentTopologyResolutionPainter.h>

#include "vtkPolyDataPainterWrap.h"

class VtkCoincidentTopologyResolutionPainterWrap : public VtkPolyDataPainterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkCoincidentTopologyResolutionPainterWrap(vtkSmartPointer<vtkCoincidentTopologyResolutionPainter>);
		VtkCoincidentTopologyResolutionPainterWrap();
		~VtkCoincidentTopologyResolutionPainterWrap( );
		static Nan::Persistent<v8::Function> constructor;

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
};

#endif
