/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCLIPVOLUMEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCLIPVOLUMEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkClipVolume.h>

#include "vtkUnstructuredGridAlgorithmWrap.h"

class VtkClipVolumeWrap : public VtkUnstructuredGridAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkClipVolumeWrap(vtkSmartPointer<vtkClipVolume>);
		VtkClipVolumeWrap();
		~VtkClipVolumeWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CreateDefaultLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateClipScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateClipScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateClippedOutputOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateClippedOutputOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClipFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClippedOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGenerateClipScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGenerateClippedOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInsideOut(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMergeTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMergeToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMergeToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMixed3DCellGeneration(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InsideOutOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InsideOutOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Mixed3DCellGenerationOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Mixed3DCellGenerationOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetClipFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGenerateClipScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGenerateClippedOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInsideOut(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMergeTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMixed3DCellGeneration(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
