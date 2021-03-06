/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKVOLUMEOFREVOLUTIONFILTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKVOLUMEOFREVOLUTIONFILTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkVolumeOfRevolutionFilter.h>

#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkVolumeOfRevolutionFilterWrap : public VtkUnstructuredGridAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkVolumeOfRevolutionFilterWrap(vtkSmartPointer<vtkVolumeOfRevolutionFilter>);
		VtkVolumeOfRevolutionFilterWrap();
		~VtkVolumeOfRevolutionFilterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetAxisDirection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAxisPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputPointsPrecisionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputPointsPrecisionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResolutionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResolutionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSweepAngle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSweepAngleMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSweepAngleMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAxisDirection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAxisPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSweepAngle(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKVOLUMEOFREVOLUTIONFILTERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKVOLUMEOFREVOLUTIONFILTERWRAP_CLASSDEF
#endif
};

#endif
