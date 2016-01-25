/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKQUADRICDECIMATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKQUADRICDECIMATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkQuadricDecimation.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkQuadricDecimationWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkQuadricDecimationWrap(vtkSmartPointer<vtkQuadricDecimation>);
		VtkQuadricDecimationWrap();
		~VtkQuadricDecimationWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AttributeErrorMetricOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AttributeErrorMetricOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActualReduction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAttributeErrorMetric(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNormalsAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNormalsWeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarsAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarsWeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTCoordsAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTCoordsWeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTargetReduction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTargetReductionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTargetReductionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTensorsAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTensorsWeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVectorsAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVectorsWeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NormalsAttributeOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NormalsAttributeOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ScalarsAttributeOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ScalarsAttributeOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAttributeErrorMetric(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNormalsAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNormalsWeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarsAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarsWeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTCoordsAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTCoordsWeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTargetReduction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTensorsAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTensorsWeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVectorsAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVectorsWeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TCoordsAttributeOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TCoordsAttributeOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TensorsAttributeOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TensorsAttributeOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void VectorsAttributeOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void VectorsAttributeOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
