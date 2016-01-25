/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKUNSTRUCTUREDGRIDHOMOGENEOUSRAYINTEGRATORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKUNSTRUCTUREDGRIDHOMOGENEOUSRAYINTEGRATORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkUnstructuredGridHomogeneousRayIntegrator.h>

#include "vtkUnstructuredGridVolumeRayIntegratorWrap.h"

class VtkUnstructuredGridHomogeneousRayIntegratorWrap : public VtkUnstructuredGridVolumeRayIntegratorWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkUnstructuredGridHomogeneousRayIntegratorWrap(vtkSmartPointer<vtkUnstructuredGridHomogeneousRayIntegrator>);
		VtkUnstructuredGridHomogeneousRayIntegratorWrap();
		~VtkUnstructuredGridHomogeneousRayIntegratorWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTransferFunctionTableSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTransferFunctionTableSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
