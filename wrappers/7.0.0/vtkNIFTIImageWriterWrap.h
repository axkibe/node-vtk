/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKNIFTIIMAGEWRITERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKNIFTIIMAGEWRITERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkNIFTIImageWriter.h>

#include "vtkImageWriterWrap.h"

class VtkNIFTIImageWriterWrap : public VtkImageWriterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkNIFTIImageWriterWrap(vtkSmartPointer<vtkNIFTIImageWriter>);
		VtkNIFTIImageWriterWrap();
		~VtkNIFTIImageWriterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDescription(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNIFTIHeader(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNIFTIVersion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPlanarRGB(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetQFac(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetQFormMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRescaleIntercept(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRescaleSlope(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSFormMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTimeDimension(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTimeSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PlanarRGBOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PlanarRGBOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDescription(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNIFTIHeader(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNIFTIVersion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPlanarRGB(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetQFac(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetQFormMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRescaleIntercept(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRescaleSlope(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSFormMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTimeDimension(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTimeSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
