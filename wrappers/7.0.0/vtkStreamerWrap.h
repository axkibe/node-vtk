/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSTREAMERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSTREAMERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkStreamer.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkStreamerWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkStreamerWrap(vtkSmartPointer<vtkStreamer>);
		VtkStreamerWrap();
		~VtkStreamerWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEpsilon(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIntegrationDirection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIntegrationDirectionAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIntegrationDirectionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIntegrationDirectionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIntegrationStepLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIntegrationStepLengthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIntegrationStepLengthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIntegrator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumPropagationTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumPropagationTimeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumPropagationTimeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfThreads(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrientationScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSavePointInterval(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSource(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSpeedScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStartPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTerminalSpeed(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTerminalSpeedMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTerminalSpeedMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVorticity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OrientationScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OrientationScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEpsilon(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIntegrationDirection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIntegrationDirectionToBackward(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIntegrationDirectionToForward(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIntegrationDirectionToIntegrateBothDirections(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIntegrationStepLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIntegrator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumPropagationTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfThreads(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrientationScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSavePointInterval(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSourceConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSourceData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSpeedScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStartPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTerminalSpeed(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVorticity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SpeedScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SpeedScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void VorticityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void VorticityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKSTREAMERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKSTREAMERWRAP_CLASSDEF
#endif
};

#endif
