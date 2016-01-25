/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKANGLEREPRESENTATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKANGLEREPRESENTATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAngleRepresentation.h>

#include "vtkWidgetRepresentationWrap.h"

class VtkAngleRepresentationWrap : public VtkWidgetRepresentationWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkAngleRepresentationWrap(vtkSmartPointer<vtkAngleRepresentation>);
		VtkAngleRepresentationWrap();
		~VtkAngleRepresentationWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ArcVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ArcVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAngle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetArcVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCenterRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoint1Representation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoint2Representation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRay1Visibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRay2Visibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InstantiateHandleRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Ray1VisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Ray1VisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Ray2VisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Ray2VisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetArcVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHandleRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRay1Visibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRay2Visibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
