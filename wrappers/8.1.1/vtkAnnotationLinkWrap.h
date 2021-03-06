/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKANNOTATIONLINKWRAP_H
#define NATIVE_EXTENSION_VTK_VTKANNOTATIONLINKWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAnnotationLink.h>

#include "vtkAnnotationLayersAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkAnnotationLinkWrap : public VtkAnnotationLayersAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkAnnotationLinkWrap(vtkSmartPointer<vtkAnnotationLink>);
		VtkAnnotationLinkWrap();
		~VtkAnnotationLinkWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddDomainMap(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAnnotationLayers(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCurrentSelection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDomainMap(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfDomainMaps(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveAllDomainMaps(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveDomainMap(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAnnotationLayers(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCurrentSelection(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKANNOTATIONLINKWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKANNOTATIONLINKWRAP_CLASSDEF
#endif
};

#endif
