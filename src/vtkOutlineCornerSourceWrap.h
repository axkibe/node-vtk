/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKOUTLINECORNERSOURCEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKOUTLINECORNERSOURCEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkOutlineCornerSource.h>

#include "vtkOutlineSourceWrap.h"

class VtkOutlineCornerSourceWrap : public VtkOutlineSourceWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkOutlineCornerSourceWrap(vtkSmartPointer<vtkOutlineCornerSource>);
		VtkOutlineCornerSourceWrap();
		~VtkOutlineCornerSourceWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCornerFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCornerFactorMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCornerFactorMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCornerFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
