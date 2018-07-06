/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKAXESWRAP_H
#define NATIVE_EXTENSION_VTK_VTKAXESWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAxes.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkAxesWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkAxesWrap(vtkSmartPointer<vtkAxes>);
		VtkAxesWrap();
		~VtkAxesWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ComputeNormalsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeNormalsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComputeNormals(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSymmetric(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetComputeNormals(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSymmetric(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SymmetricOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SymmetricOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKAXESWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKAXESWRAP_CLASSDEF
#endif
};

#endif
