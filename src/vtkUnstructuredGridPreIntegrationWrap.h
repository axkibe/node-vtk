/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKUNSTRUCTUREDGRIDPREINTEGRATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKUNSTRUCTUREDGRIDPREINTEGRATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkUnstructuredGridPreIntegration.h>

#include "vtkUnstructuredGridVolumeRayIntegratorWrap.h"

class VtkUnstructuredGridPreIntegrationWrap : public VtkUnstructuredGridVolumeRayIntegratorWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkUnstructuredGridPreIntegrationWrap(vtkSmartPointer<vtkUnstructuredGridPreIntegration>);
		VtkUnstructuredGridPreIntegrationWrap();
		~VtkUnstructuredGridPreIntegrationWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIncrementalPreIntegration(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIntegrationTableLengthResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIntegrationTableLengthScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIntegrationTableScalarResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIntegrationTableScalarScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIntegrationTableScalarShift(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIntegrator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IncrementalPreIntegrationOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IncrementalPreIntegrationOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIncrementalPreIntegration(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIntegrationTableLengthResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIntegrationTableScalarResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIntegrator(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
