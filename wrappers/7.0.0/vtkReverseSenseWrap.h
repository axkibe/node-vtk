/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKREVERSESENSEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKREVERSESENSEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkReverseSense.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkReverseSenseWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkReverseSenseWrap(vtkSmartPointer<vtkReverseSense>);
		VtkReverseSenseWrap();
		~VtkReverseSenseWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetReverseCells(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetReverseNormals(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReverseCellsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReverseCellsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReverseNormalsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReverseNormalsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetReverseCells(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetReverseNormals(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKREVERSESENSEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKREVERSESENSEWRAP_CLASSDEF
#endif
};

#endif
