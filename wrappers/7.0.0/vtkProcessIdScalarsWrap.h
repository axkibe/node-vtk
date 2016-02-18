/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPROCESSIDSCALARSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPROCESSIDSCALARSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkProcessIdScalars.h>

#include "vtkDataSetAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkProcessIdScalarsWrap : public VtkDataSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkProcessIdScalarsWrap(vtkSmartPointer<vtkProcessIdScalars>);
		VtkProcessIdScalarsWrap();
		~VtkProcessIdScalarsWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetController(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRandomMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RandomModeOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RandomModeOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetController(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRandomMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarModeToCellData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarModeToPointData(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKPROCESSIDSCALARSWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKPROCESSIDSCALARSWRAP_CLASSDEF
#endif
};

#endif
