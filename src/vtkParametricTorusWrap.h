/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPARAMETRICTORUSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPARAMETRICTORUSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkParametricTorus.h>

#include "vtkParametricFunctionWrap.h"

class VtkParametricTorusWrap : public VtkParametricFunctionWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkParametricTorusWrap(vtkSmartPointer<vtkParametricTorus>);
		VtkParametricTorusWrap();
		~VtkParametricTorusWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCrossSectionRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDimension(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRingRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCrossSectionRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRingRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
