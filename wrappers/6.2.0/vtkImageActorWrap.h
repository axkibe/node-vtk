/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGEACTORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGEACTORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageActor.h>

#include "vtkImageSliceWrap.h"

class VtkImageActorWrap : public VtkImageSliceWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageActorWrap(vtkSmartPointer<vtkImageActor>);
		VtkImageActorWrap();
		~VtkImageActorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInterpolate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOpacityMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOpacityMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSliceNumber(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSliceNumberMax(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSliceNumberMin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWholeZMax(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWholeZMin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZSlice(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InterpolateOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InterpolateOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDisplayExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetZSlice(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
