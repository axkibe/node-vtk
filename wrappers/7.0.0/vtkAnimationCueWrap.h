/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKANIMATIONCUEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKANIMATIONCUEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAnimationCue.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkAnimationCueWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkAnimationCueWrap(vtkSmartPointer<vtkAnimationCue>);
		VtkAnimationCueWrap();
		~VtkAnimationCueWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void Finalize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAnimationTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClockTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDeltaTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEndTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStartTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTimeMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEndTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStartTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTimeMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTimeModeToNormalized(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTimeModeToRelative(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Tick(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKANIMATIONCUEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKANIMATIONCUEWRAP_CLASSDEF
#endif
};

#endif
