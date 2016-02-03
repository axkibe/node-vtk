/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKVIDEOSOURCEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKVIDEOSOURCEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkVideoSource.h>

#include "vtkImageAlgorithmWrap.h"

class VtkVideoSourceWrap : public VtkImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkVideoSourceWrap(vtkSmartPointer<vtkVideoSource>);
		VtkVideoSourceWrap();
		~VtkVideoSourceWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AutoAdvanceOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AutoAdvanceOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FastForward(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAutoAdvance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFrameBufferSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFrameCount(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFrameIndex(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFrameTimeStamp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInitialized(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfOutputFrames(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPlaying(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRecording(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStartTimeStamp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Grab(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InternalGrab(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Play(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Record(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseSystemResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Rewind(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Seek(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAutoAdvance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetClipRegion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFrameBufferSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFrameCount(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFrameSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfOutputFrames(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputFormatToLuminance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputFormatToRGB(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputFormatToRGBA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStartTimeStamp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Stop(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
