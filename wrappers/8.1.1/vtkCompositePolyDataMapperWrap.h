/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCOMPOSITEPOLYDATAMAPPERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCOMPOSITEPOLYDATAMAPPERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCompositePolyDataMapper.h>

#include "vtkMapperWrap.h"
#include "../../plus/plus.h"

class VtkCompositePolyDataMapperWrap : public VtkMapperWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCompositePolyDataMapperWrap(vtkSmartPointer<vtkCompositePolyDataMapper>);
		VtkCompositePolyDataMapperWrap();
		~VtkCompositePolyDataMapperWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Render(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCOMPOSITEPOLYDATAMAPPERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCOMPOSITEPOLYDATAMAPPERWRAP_CLASSDEF
#endif
};

#endif