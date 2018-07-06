/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCOMPOSITEDATADISPLAYATTRIBUTESLEGACYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCOMPOSITEDATADISPLAYATTRIBUTESLEGACYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCompositeDataDisplayAttributesLegacy.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkCompositeDataDisplayAttributesLegacyWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCompositeDataDisplayAttributesLegacyWrap(vtkSmartPointer<vtkCompositeDataDisplayAttributesLegacy>);
		VtkCompositeDataDisplayAttributesLegacyWrap();
		~VtkCompositeDataDisplayAttributesLegacyWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ComputeVisibleBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBlockColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBlockOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBlockPickability(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBlockVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasBlockColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasBlockColors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasBlockOpacities(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasBlockOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasBlockPickabilities(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasBlockPickability(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasBlockVisibilities(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasBlockVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveBlockColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveBlockColors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveBlockOpacities(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveBlockOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveBlockPickabilities(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveBlockPickability(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveBlockVisibilites(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveBlockVisibilities(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveBlockVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBlockColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBlockOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBlockPickability(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBlockVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCOMPOSITEDATADISPLAYATTRIBUTESLEGACYWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCOMPOSITEDATADISPLAYATTRIBUTESLEGACYWRAP_CLASSDEF
#endif
};

#endif
