/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKANIMATIONSCENEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKANIMATIONSCENEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAnimationScene.h>

#include "vtkAnimationCueWrap.h"

class VtkAnimationSceneWrap : public VtkAnimationCueWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkAnimationSceneWrap(vtkSmartPointer<vtkAnimationScene>);
		VtkAnimationSceneWrap();
		~VtkAnimationSceneWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddCue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAnimationTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFrameRate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLoop(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfCues(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPlayMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsInPlay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Play(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveAllCues(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveCue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAnimationTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFrameRate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLoop(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetModeToRealTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetModeToSequence(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPlayMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTimeMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Stop(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
