/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKMULTIBLOCKVOLUMEMAPPERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKMULTIBLOCKVOLUMEMAPPERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkMultiBlockVolumeMapper.h>

#include "vtkVolumeMapperWrap.h"
#include "../../plus/plus.h"

class VtkMultiBlockVolumeMapperWrap : public VtkVolumeMapperWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkMultiBlockVolumeMapperWrap(vtkSmartPointer<vtkMultiBlockVolumeMapper>);
		VtkMultiBlockVolumeMapperWrap();
		~VtkMultiBlockVolumeMapperWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetVectorComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVectorMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Render(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SelectScalarArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetArrayAccessMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBlendMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCropping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCroppingRegionFlags(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCroppingRegionPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetJitteringResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVectorComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVectorMode(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKMULTIBLOCKVOLUMEMAPPERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKMULTIBLOCKVOLUMEMAPPERWRAP_CLASSDEF
#endif
};

#endif
