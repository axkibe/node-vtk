/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKAXESTRANSFORMREPRESENTATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKAXESTRANSFORMREPRESENTATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAxesTransformRepresentation.h>

#include "vtkWidgetRepresentationWrap.h"

class VtkAxesTransformRepresentationWrap : public VtkWidgetRepresentationWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkAxesTransformRepresentationWrap(vtkSmartPointer<vtkAxesTransformRepresentation>);
		VtkAxesTransformRepresentationWrap();
		~VtkAxesTransformRepresentationWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInteractionStateMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInteractionStateMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOriginRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectionRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
