/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGEDILATEERODE3DWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGEDILATEERODE3DWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageDilateErode3D.h>

#include "vtkImageSpatialAlgorithmWrap.h"

class VtkImageDilateErode3DWrap : public VtkImageSpatialAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageDilateErode3DWrap(vtkSmartPointer<vtkImageDilateErode3D>);
		VtkImageDilateErode3DWrap();
		~VtkImageDilateErode3DWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDilateValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetErodeValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDilateValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetErodeValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetKernelSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif