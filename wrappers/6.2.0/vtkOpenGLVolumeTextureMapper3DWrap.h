/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKOPENGLVOLUMETEXTUREMAPPER3DWRAP_H
#define NATIVE_EXTENSION_VTK_VTKOPENGLVOLUMETEXTUREMAPPER3DWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkOpenGLVolumeTextureMapper3D.h>

#include "vtkVolumeTextureMapper3DWrap.h"

class VtkOpenGLVolumeTextureMapper3DWrap : public VtkVolumeTextureMapper3DWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkOpenGLVolumeTextureMapper3DWrap(vtkSmartPointer<vtkOpenGLVolumeTextureMapper3D>);
		VtkOpenGLVolumeTextureMapper3DWrap();
		~VtkOpenGLVolumeTextureMapper3DWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInitialized(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsRenderSupported(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Render(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
