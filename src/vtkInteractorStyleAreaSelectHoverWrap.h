/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKINTERACTORSTYLEAREASELECTHOVERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKINTERACTORSTYLEAREASELECTHOVERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkInteractorStyleAreaSelectHover.h>

#include "vtkInteractorStyleRubberBand2DWrap.h"

class VtkInteractorStyleAreaSelectHoverWrap : public VtkInteractorStyleRubberBand2DWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkInteractorStyleAreaSelectHoverWrap(vtkSmartPointer<vtkInteractorStyleAreaSelectHover>);
		VtkInteractorStyleAreaSelectHoverWrap();
		~VtkInteractorStyleAreaSelectHoverWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHighLightWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelField(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLayout(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnMouseMove(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHighLightColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHighLightWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInteractor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelField(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLayout(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseRectangularCoordinatesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseRectangularCoordinatesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
