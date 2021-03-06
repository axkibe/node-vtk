/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSEEDREPRESENTATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSEEDREPRESENTATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkSeedRepresentation.h>

#include "vtkWidgetRepresentationWrap.h"
#include "../../plus/plus.h"

class VtkSeedRepresentationWrap : public VtkWidgetRepresentationWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkSeedRepresentationWrap(vtkSmartPointer<vtkSeedRepresentation>);
		VtkSeedRepresentationWrap();
		~VtkSeedRepresentationWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CreateHandle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActiveHandle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHandleRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfSeeds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSeedDisplayPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSeedWorldPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveActiveHandle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveHandle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveLastHandle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHandleRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSeedDisplayPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKSEEDREPRESENTATIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKSEEDREPRESENTATIONWRAP_CLASSDEF
#endif
};

#endif
