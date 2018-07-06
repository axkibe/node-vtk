/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKFOCALPLANECONTOURREPRESENTATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKFOCALPLANECONTOURREPRESENTATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkFocalPlaneContourRepresentation.h>

#include "vtkContourRepresentationWrap.h"
#include "../../plus/plus.h"

class VtkFocalPlaneContourRepresentationWrap : public VtkContourRepresentationWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkFocalPlaneContourRepresentationWrap(vtkSmartPointer<vtkFocalPlaneContourRepresentation>);
		VtkFocalPlaneContourRepresentationWrap();
		~VtkFocalPlaneContourRepresentationWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetIntermediatePointDisplayPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIntermediatePointWorldPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNthNodeDisplayPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNthNodeWorldPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdateContour(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdateContourWorldPositionsBasedOnDisplayPositions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdateLines(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKFOCALPLANECONTOURREPRESENTATIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKFOCALPLANECONTOURREPRESENTATIONWRAP_CLASSDEF
#endif
};

#endif
