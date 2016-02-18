/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKASSIGNCOORDINATESLAYOUTSTRATEGYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKASSIGNCOORDINATESLAYOUTSTRATEGYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAssignCoordinatesLayoutStrategy.h>

#include "vtkGraphLayoutStrategyWrap.h"
#include "../../plus/plus.h"

class VtkAssignCoordinatesLayoutStrategyWrap : public VtkGraphLayoutStrategyWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkAssignCoordinatesLayoutStrategyWrap(vtkSmartPointer<vtkAssignCoordinatesLayoutStrategy>);
		VtkAssignCoordinatesLayoutStrategyWrap();
		~VtkAssignCoordinatesLayoutStrategyWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXCoordArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYCoordArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZCoordArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Layout(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXCoordArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetYCoordArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetZCoordArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKASSIGNCOORDINATESLAYOUTSTRATEGYWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKASSIGNCOORDINATESLAYOUTSTRATEGYWRAP_CLASSDEF
#endif
};

#endif
