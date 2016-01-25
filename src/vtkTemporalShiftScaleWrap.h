/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTEMPORALSHIFTSCALEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTEMPORALSHIFTSCALEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTemporalShiftScale.h>

#include "vtkAlgorithmWrap.h"

class VtkTemporalShiftScaleWrap : public VtkAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkTemporalShiftScaleWrap(vtkSmartPointer<vtkTemporalShiftScale>);
		VtkTemporalShiftScaleWrap();
		~VtkTemporalShiftScaleWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumNumberOfPeriods(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPeriodic(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPeriodicEndCorrection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPostShift(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPreShift(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PeriodicEndCorrectionOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PeriodicEndCorrectionOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PeriodicOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PeriodicOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumNumberOfPeriods(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPeriodic(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPeriodicEndCorrection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPostShift(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPreShift(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif