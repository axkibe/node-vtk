/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKVOLUMECONTOURSPECTRUMFILTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKVOLUMECONTOURSPECTRUMFILTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkVolumeContourSpectrumFilter.h>

#include "vtkDataObjectAlgorithmWrap.h"

class VtkVolumeContourSpectrumFilterWrap : public VtkDataObjectAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkVolumeContourSpectrumFilterWrap(vtkSmartPointer<vtkVolumeContourSpectrumFilter>);
		VtkVolumeContourSpectrumFilterWrap();
		~VtkVolumeContourSpectrumFilterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfSamples(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfSamples(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
