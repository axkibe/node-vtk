/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKDISTANCETOCAMERAWRAP_H
#define NATIVE_EXTENSION_VTK_VTKDISTANCETOCAMERAWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkDistanceToCamera.h>

#include "vtkPointSetAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkDistanceToCameraWrap : public VtkPointSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkDistanceToCameraWrap(vtkSmartPointer<vtkDistanceToCamera>);
		VtkDistanceToCameraWrap();
		~VtkDistanceToCameraWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetDistanceArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScaling(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScreenSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ScalingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ScalingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDistanceArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScaling(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScreenSize(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKDISTANCETOCAMERAWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKDISTANCETOCAMERAWRAP_CLASSDEF
#endif
};

#endif
