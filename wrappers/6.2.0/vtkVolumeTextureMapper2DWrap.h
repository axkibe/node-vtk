/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKVOLUMETEXTUREMAPPER2DWRAP_H
#define NATIVE_EXTENSION_VTK_VTKVOLUMETEXTUREMAPPER2DWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkVolumeTextureMapper2D.h>

#include "vtkVolumeTextureMapperWrap.h"

class VtkVolumeTextureMapper2DWrap : public VtkVolumeTextureMapperWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkVolumeTextureMapper2DWrap(vtkSmartPointer<vtkVolumeTextureMapper2D>);
		VtkVolumeTextureMapper2DWrap();
		~VtkVolumeTextureMapper2DWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInternalSkipFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumNumberOfPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumStorageSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSaveTextures(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Render(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumNumberOfPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumStorageSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTargetTextureSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif