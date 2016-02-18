/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKKCORELAYOUTWRAP_H
#define NATIVE_EXTENSION_VTK_VTKKCORELAYOUTWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkKCoreLayout.h>

#include "vtkGraphAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkKCoreLayoutWrap : public VtkGraphAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkKCoreLayoutWrap(vtkSmartPointer<vtkKCoreLayout>);
		VtkKCoreLayoutWrap();
		~VtkKCoreLayoutWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CartesianOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CartesianOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FillInputPortInformation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCartesian(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCartesianCoordsXArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCartesianCoordsYArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPolar(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPolarCoordsAngleArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPolarCoordsRadiusArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PolarOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PolarOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCartesian(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCartesianCoordsXArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCartesianCoordsYArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGraphConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetKCoreLabelArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPolar(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPolarCoordsAngleArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPolarCoordsRadiusArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKKCORELAYOUTWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKKCORELAYOUTWRAP_CLASSDEF
#endif
};

#endif
