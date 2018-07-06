/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKDYNAMIC2DLABELMAPPERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKDYNAMIC2DLABELMAPPERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkDynamic2DLabelMapper.h>

#include "vtkLabeledDataMapperWrap.h"
#include "../../plus/plus.h"

class VtkDynamic2DLabelMapperWrap : public VtkLabeledDataMapperWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkDynamic2DLabelMapperWrap(vtkSmartPointer<vtkDynamic2DLabelMapper>);
		VtkDynamic2DLabelMapperWrap();
		~VtkDynamic2DLabelMapperWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetLabelHeightPadding(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelWidthPadding(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetReversePriority(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReversePriorityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReversePriorityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelHeightPadding(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelWidthPadding(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPriorityArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetReversePriority(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKDYNAMIC2DLABELMAPPERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKDYNAMIC2DLABELMAPPERWRAP_CLASSDEF
#endif
};

#endif
