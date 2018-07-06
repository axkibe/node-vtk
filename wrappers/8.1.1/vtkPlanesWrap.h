/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPLANESWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPLANESWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPlanes.h>

#include "vtkImplicitFunctionWrap.h"
#include "../../plus/plus.h"

class VtkPlanesWrap : public VtkImplicitFunctionWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPlanesWrap(vtkSmartPointer<vtkPlanes>);
		VtkPlanesWrap();
		~VtkPlanesWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void EvaluateFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EvaluateGradient(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNormals(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPlane(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFrustumPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNormals(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKPLANESWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKPLANESWRAP_CLASSDEF
#endif
};

#endif
