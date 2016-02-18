/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPROJECTSPHEREFILTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPROJECTSPHEREFILTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkProjectSphereFilter.h>

#include "vtkPointSetAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkProjectSphereFilterWrap : public VtkPointSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkProjectSphereFilterWrap(vtkSmartPointer<vtkProjectSphereFilter>);
		VtkProjectSphereFilterWrap();
		~VtkProjectSphereFilterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetKeepPolePoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTranslateZ(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void KeepPolePointsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void KeepPolePointsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetKeepPolePoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTranslateZ(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TranslateZOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TranslateZOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKPROJECTSPHEREFILTERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKPROJECTSPHEREFILTERWRAP_CLASSDEF
#endif
};

#endif
