/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKRECTILINEARGRIDGEOMETRYFILTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKRECTILINEARGRIDGEOMETRYFILTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkRectilinearGridGeometryFilter.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkRectilinearGridGeometryFilterWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkRectilinearGridGeometryFilterWrap(vtkSmartPointer<vtkRectilinearGridGeometryFilter>);
		VtkRectilinearGridGeometryFilterWrap();
		~VtkRectilinearGridGeometryFilterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKRECTILINEARGRIDGEOMETRYFILTERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKRECTILINEARGRIDGEOMETRYFILTERWRAP_CLASSDEF
#endif
};

#endif
