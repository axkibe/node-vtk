/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTEXTUREDSPHERESOURCEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTEXTUREDSPHERESOURCEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTexturedSphereSource.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkTexturedSphereSourceWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkTexturedSphereSourceWrap(vtkSmartPointer<vtkTexturedSphereSource>);
		VtkTexturedSphereSourceWrap();
		~VtkTexturedSphereSourceWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPhi(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPhiMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPhiMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPhiResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPhiResolutionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPhiResolutionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRadiusMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRadiusMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTheta(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetThetaMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetThetaMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetThetaResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetThetaResolutionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetThetaResolutionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPhi(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPhiResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTheta(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetThetaResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
