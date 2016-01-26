/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKOUTLINECORNERFILTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKOUTLINECORNERFILTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkOutlineCornerFilter.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkOutlineCornerFilterWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkOutlineCornerFilterWrap(vtkSmartPointer<vtkOutlineCornerFilter>);
		VtkOutlineCornerFilterWrap();
		~VtkOutlineCornerFilterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCornerFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCornerFactorMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCornerFactorMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCornerFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
