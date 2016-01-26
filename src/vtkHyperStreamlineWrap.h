/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKHYPERSTREAMLINEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKHYPERSTREAMLINEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkHyperStreamline.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkHyperStreamlineWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkHyperStreamlineWrap(vtkSmartPointer<vtkHyperStreamline>);
		VtkHyperStreamlineWrap();
		~VtkHyperStreamlineWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIntegrationDirection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIntegrationDirectionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIntegrationDirectionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIntegrationEigenvector(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIntegrationEigenvectorMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIntegrationEigenvectorMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIntegrationStepLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIntegrationStepLengthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIntegrationStepLengthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLogScaling(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumPropagationDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumPropagationDistanceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumPropagationDistanceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfSides(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfSidesMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfSidesMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRadiusMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRadiusMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStepLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStepLengthMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStepLengthMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTerminalEigenvalue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTerminalEigenvalueMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTerminalEigenvalueMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IntegrateMajorEigenvector(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IntegrateMediumEigenvector(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IntegrateMinorEigenvector(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LogScalingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LogScalingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIntegrationDirection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIntegrationDirectionToBackward(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIntegrationDirectionToForward(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIntegrationDirectionToIntegrateBothDirections(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIntegrationEigenvector(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIntegrationEigenvectorToMajor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIntegrationEigenvectorToMedium(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIntegrationEigenvectorToMinor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIntegrationStepLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLogScaling(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumPropagationDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfSides(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStartPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStepLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTerminalEigenvalue(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
