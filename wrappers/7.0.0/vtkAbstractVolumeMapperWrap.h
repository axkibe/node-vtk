/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKABSTRACTVOLUMEMAPPERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKABSTRACTVOLUMEMAPPERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAbstractVolumeMapper.h>

#include "vtkAbstractMapper3DWrap.h"
#include "../../plus/plus.h"

class VtkAbstractVolumeMapperWrap : public VtkAbstractMapper3DWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkAbstractVolumeMapperWrap(vtkSmartPointer<vtkAbstractVolumeMapper>);
		VtkAbstractVolumeMapperWrap();
		~VtkAbstractVolumeMapperWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetArrayAccessMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetArrayId(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataObjectInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataSetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGradientMagnitudeBias(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGradientMagnitudeScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SelectScalarArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarModeToDefault(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarModeToUseCellData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarModeToUseCellFieldData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarModeToUsePointData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarModeToUsePointFieldData(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKABSTRACTVOLUMEMAPPERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKABSTRACTVOLUMEMAPPERWRAP_CLASSDEF
#endif
};

#endif
