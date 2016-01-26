/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMPLICITFUNCTIONTOIMAGESTENCILWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMPLICITFUNCTIONTOIMAGESTENCILWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImplicitFunctionToImageStencil.h>

#include "vtkImageStencilSourceWrap.h"

class VtkImplicitFunctionToImageStencilWrap : public VtkImageStencilSourceWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImplicitFunctionToImageStencilWrap(vtkSmartPointer<vtkImplicitFunctionToImageStencil>);
		VtkImplicitFunctionToImageStencilWrap();
		~VtkImplicitFunctionToImageStencilWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
