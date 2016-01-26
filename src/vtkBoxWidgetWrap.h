/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKBOXWIDGETWRAP_H
#define NATIVE_EXTENSION_VTK_VTKBOXWIDGETWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkBoxWidget.h>

#include "vtk3DWidgetWrap.h"

class VtkBoxWidgetWrap : public Vtk3DWidgetWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkBoxWidgetWrap(vtkSmartPointer<vtkBoxWidget>);
		VtkBoxWidgetWrap();
		~VtkBoxWidgetWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFaceProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHandleProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInsideOut(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutlineCursorWires(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutlineFaceWires(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutlineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPolyData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRotationEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalingEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectedFaceProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectedHandleProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectedOutlineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTranslationEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HandlesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HandlesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InsideOutOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InsideOutOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OutlineCursorWiresOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OutlineCursorWiresOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OutlineFaceWiresOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OutlineFaceWiresOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PlaceWidget(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RotationEnabledOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RotationEnabledOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ScalingEnabledOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ScalingEnabledOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInsideOut(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutlineCursorWires(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutlineFaceWires(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRotationEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalingEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTranslationEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TranslationEnabledOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TranslationEnabledOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
