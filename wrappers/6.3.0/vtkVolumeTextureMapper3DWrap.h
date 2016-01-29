/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKVOLUMETEXTUREMAPPER3DWRAP_H
#define NATIVE_EXTENSION_VTK_VTKVOLUMETEXTUREMAPPER3DWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkVolumeTextureMapper3D.h>

#include "vtkVolumeMapperWrap.h"

class VtkVolumeTextureMapper3DWrap : public VtkVolumeMapperWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkVolumeTextureMapper3DWrap(vtkSmartPointer<vtkVolumeTextureMapper3D>);
		VtkVolumeTextureMapper3DWrap();
		~VtkVolumeTextureMapper3DWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPolygons(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfScalarComponents(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPreferredRenderMethod(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPreferredRenderMethodMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPreferredRenderMethodMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseCompressedTexture(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsRenderSupported(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Render(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPreferredMethodToFragmentProgram(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPreferredMethodToNVidia(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPreferredRenderMethod(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseCompressedTexture(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
