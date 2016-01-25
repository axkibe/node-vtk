/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKVOLUMERAYCASTISOSURFACEFUNCTIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKVOLUMERAYCASTISOSURFACEFUNCTIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkVolumeRayCastIsosurfaceFunction.h>

#include "vtkVolumeRayCastFunctionWrap.h"

class VtkVolumeRayCastIsosurfaceFunctionWrap : public VtkVolumeRayCastFunctionWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkVolumeRayCastIsosurfaceFunctionWrap(vtkSmartPointer<vtkVolumeRayCastIsosurfaceFunction>);
		VtkVolumeRayCastIsosurfaceFunctionWrap();
		~VtkVolumeRayCastIsosurfaceFunctionWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIsoValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIsoValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
