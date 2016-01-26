/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGESLABRESLICEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGESLABRESLICEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageSlabReslice.h>

#include "vtkImageResliceWrap.h"

class VtkImageSlabResliceWrap : public VtkImageResliceWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageSlabResliceWrap(vtkSmartPointer<vtkImageSlabReslice>);
		VtkImageSlabResliceWrap();
		~VtkImageSlabResliceWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetBlendMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumBlendSamplePoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSlabResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSlabThickness(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBlendMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBlendModeToMax(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBlendModeToMean(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBlendModeToMin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSlabResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSlabThickness(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
