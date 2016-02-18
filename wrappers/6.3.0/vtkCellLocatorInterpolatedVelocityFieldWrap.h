/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCELLLOCATORINTERPOLATEDVELOCITYFIELDWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCELLLOCATORINTERPOLATEDVELOCITYFIELDWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCellLocatorInterpolatedVelocityField.h>

#include "vtkCompositeInterpolatedVelocityFieldWrap.h"
#include "../../plus/plus.h"

class VtkCellLocatorInterpolatedVelocityFieldWrap : public VtkCompositeInterpolatedVelocityFieldWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCellLocatorInterpolatedVelocityFieldWrap(vtkSmartPointer<vtkCellLocatorInterpolatedVelocityField>);
		VtkCellLocatorInterpolatedVelocityFieldWrap();
		~VtkCellLocatorInterpolatedVelocityFieldWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddDataSet(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CopyParameters(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellLocatorPrototype(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLastCellLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCellLocatorPrototype(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCELLLOCATORINTERPOLATEDVELOCITYFIELDWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCELLLOCATORINTERPOLATEDVELOCITYFIELDWRAP_CLASSDEF
#endif
};

#endif
