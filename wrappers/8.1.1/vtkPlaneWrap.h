/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPLANEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPLANEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPlane.h>

#include "vtkImplicitFunctionWrap.h"
#include "../../plus/plus.h"

class VtkPlaneWrap : public VtkImplicitFunctionWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPlaneWrap(vtkSmartPointer<vtkPlane>);
		VtkPlaneWrap();
		~VtkPlaneWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void DistanceToPlane(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Evaluate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EvaluateFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EvaluateGradient(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GeneralizedProjectPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNormal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ProjectPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ProjectVector(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Push(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNormal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKPLANEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKPLANEWRAP_CLASSDEF
#endif
};

#endif
