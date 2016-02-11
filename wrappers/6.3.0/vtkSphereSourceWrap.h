/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSPHERESOURCEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSPHERESOURCEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkSphereSource.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkSphereSourceWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkSphereSourceWrap(vtkSmartPointer<vtkSphereSource>);
		VtkSphereSourceWrap();
		~VtkSphereSourceWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEndPhi(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEndPhiMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEndPhiMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEndTheta(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEndThetaMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEndThetaMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLatLongTessellation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPhiResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPhiResolutionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPhiResolutionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRadiusMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRadiusMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStartPhi(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStartPhiMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStartPhiMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStartTheta(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStartThetaMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStartThetaMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetThetaResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetThetaResolutionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetThetaResolutionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LatLongTessellationOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LatLongTessellationOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEndPhi(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEndTheta(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLatLongTessellation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPhiResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStartPhi(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStartTheta(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetThetaResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
