/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKVOLUMEOUTLINESOURCEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKVOLUMEOUTLINESOURCEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkVolumeOutlineSource.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkVolumeOutlineSourceWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkVolumeOutlineSourceWrap(vtkSmartPointer<vtkVolumeOutlineSource>);
		VtkVolumeOutlineSourceWrap();
		~VtkVolumeOutlineSourceWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GenerateFacesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateFacesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateOutlineOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateOutlineOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActivePlaneColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActivePlaneId(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGenerateFaces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGenerateOutline(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGenerateScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVolumeMapper(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetActivePlaneColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetActivePlaneId(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGenerateFaces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGenerateOutline(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGenerateScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVolumeMapper(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
