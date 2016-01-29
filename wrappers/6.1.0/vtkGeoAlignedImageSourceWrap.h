/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGEOALIGNEDIMAGESOURCEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGEOALIGNEDIMAGESOURCEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGeoAlignedImageSource.h>

#include "vtkGeoSourceWrap.h"

class VtkGeoAlignedImageSourceWrap : public VtkGeoSourceWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkGeoAlignedImageSourceWrap(vtkSmartPointer<vtkGeoAlignedImageSource>);
		VtkGeoAlignedImageSourceWrap();
		~VtkGeoAlignedImageSourceWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void FetchChild(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FetchRoot(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOverlap(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOverlapMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOverlapMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPowerOfTwoSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PowerOfTwoSizeOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PowerOfTwoSizeOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetImage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLatitudeRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLongitudeRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOverlap(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPowerOfTwoSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
