/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTEMPORALSNAPTOTIMESTEPWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTEMPORALSNAPTOTIMESTEPWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTemporalSnapToTimeStep.h>

#include "vtkAlgorithmWrap.h"

class VtkTemporalSnapToTimeStepWrap : public VtkAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkTemporalSnapToTimeStepWrap(vtkSmartPointer<vtkTemporalSnapToTimeStep>);
		VtkTemporalSnapToTimeStepWrap();
		~VtkTemporalSnapToTimeStepWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSnapMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSnapMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSnapModeToNearest(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSnapModeToNextAboveOrEqual(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSnapModeToNextBelowOrEqual(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
