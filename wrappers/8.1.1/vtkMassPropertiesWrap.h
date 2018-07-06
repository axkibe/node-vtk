/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKMASSPROPERTIESWRAP_H
#define NATIVE_EXTENSION_VTK_VTKMASSPROPERTIESWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkMassProperties.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkMassPropertiesWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkMassPropertiesWrap(vtkSmartPointer<vtkMassProperties>);
		VtkMassPropertiesWrap();
		~VtkMassPropertiesWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetKx(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetKy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetKz(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaxCellArea(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinCellArea(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNormalizedShapeIndex(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSurfaceArea(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVolume(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVolumeProjected(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVolumeX(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVolumeY(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVolumeZ(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKMASSPROPERTIESWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKMASSPROPERTIESWRAP_CLASSDEF
#endif
};

#endif
