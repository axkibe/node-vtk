/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKBSPLINETRANSFORMWRAP_H
#define NATIVE_EXTENSION_VTK_VTKBSPLINETRANSFORMWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkBSplineTransform.h>

#include "vtkWarpTransformWrap.h"

class VtkBSplineTransformWrap : public VtkWarpTransformWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkBSplineTransformWrap(vtkSmartPointer<vtkBSplineTransform>);
		VtkBSplineTransformWrap();
		~VtkBSplineTransformWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetBorderMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBorderModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBorderModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBorderModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCoefficientData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MakeTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBorderMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBorderModeToEdge(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBorderModeToZero(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBorderModeToZeroAtBorder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCoefficientConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCoefficientData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDisplacementScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
