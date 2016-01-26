/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSHEPARDMETHODWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSHEPARDMETHODWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkShepardMethod.h>

#include "vtkImageAlgorithmWrap.h"

class VtkShepardMethodWrap : public VtkImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkShepardMethodWrap(vtkSmartPointer<vtkShepardMethod>);
		VtkShepardMethodWrap();
		~VtkShepardMethodWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumDistanceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumDistanceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNullValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetModelBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNullValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSampleDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
