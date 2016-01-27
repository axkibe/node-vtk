/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGERGBTOHSIWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGERGBTOHSIWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageRGBToHSI.h>

#include "vtkThreadedImageAlgorithmWrap.h"

class VtkImageRGBToHSIWrap : public VtkThreadedImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageRGBToHSIWrap(vtkSmartPointer<vtkImageRGBToHSI>);
		VtkImageRGBToHSIWrap();
		~VtkImageRGBToHSIWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximum(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximum(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
