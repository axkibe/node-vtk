/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPOLYLINEREPRESENTATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPOLYLINEREPRESENTATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPolyLineRepresentation.h>

#include "vtkCurveRepresentationWrap.h"
#include "../../plus/plus.h"

class VtkPolyLineRepresentationWrap : public VtkCurveRepresentationWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPolyLineRepresentationWrap(vtkSmartPointer<vtkPolyLineRepresentation>);
		VtkPolyLineRepresentationWrap();
		~VtkPolyLineRepresentationWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHandlePositions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPolyData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSummedLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InitializeHandles(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfHandles(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKPOLYLINEREPRESENTATIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKPOLYLINEREPRESENTATIONWRAP_CLASSDEF
#endif
};

#endif
