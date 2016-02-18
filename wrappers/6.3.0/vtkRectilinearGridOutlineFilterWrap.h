/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKRECTILINEARGRIDOUTLINEFILTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKRECTILINEARGRIDOUTLINEFILTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkRectilinearGridOutlineFilter.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkRectilinearGridOutlineFilterWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkRectilinearGridOutlineFilterWrap(vtkSmartPointer<vtkRectilinearGridOutlineFilter>);
		VtkRectilinearGridOutlineFilterWrap();
		~VtkRectilinearGridOutlineFilterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKRECTILINEARGRIDOUTLINEFILTERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKRECTILINEARGRIDOUTLINEFILTERWRAP_CLASSDEF
#endif
};

#endif
