/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKWEIGHTEDTRANSFORMFILTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKWEIGHTEDTRANSFORMFILTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkWeightedTransformFilter.h>

#include "vtkPointSetAlgorithmWrap.h"

class VtkWeightedTransformFilterWrap : public VtkPointSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkWeightedTransformFilterWrap(vtkSmartPointer<vtkWeightedTransformFilter>);
		VtkWeightedTransformFilterWrap();
		~VtkWeightedTransformFilterWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddInputValuesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AddInputValuesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAddInputValues(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellDataTransformIndexArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellDataWeightArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfTransforms(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTransformIndexArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWeightArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAddInputValues(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCellDataTransformIndexArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCellDataWeightArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfTransforms(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTransformIndexArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWeightArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
