/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGRADIENTFILTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGRADIENTFILTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGradientFilter.h>

#include "vtkDataSetAlgorithmWrap.h"

class VtkGradientFilterWrap : public VtkDataSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkGradientFilterWrap(vtkSmartPointer<vtkGradientFilter>);
		VtkGradientFilterWrap();
		~VtkGradientFilterWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ComputeQCriterionOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeQCriterionOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeVorticityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeVorticityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FasterApproximationOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FasterApproximationOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComputeQCriterion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComputeVorticity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFasterApproximation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetQCriterionArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResultArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVorticityArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetComputeQCriterion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetComputeVorticity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFasterApproximation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetQCriterionArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetResultArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVorticityArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
