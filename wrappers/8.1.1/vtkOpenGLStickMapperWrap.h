/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKOPENGLSTICKMAPPERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKOPENGLSTICKMAPPERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkOpenGLStickMapper.h>

#include "vtkOpenGLPolyDataMapperWrap.h"
#include "../../plus/plus.h"

class VtkOpenGLStickMapperWrap : public VtkOpenGLPolyDataMapperWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkOpenGLStickMapperWrap(vtkSmartPointer<vtkOpenGLStickMapper>);
		VtkOpenGLStickMapperWrap();
		~VtkOpenGLStickMapperWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrientationArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScaleArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectionIdArray(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKOPENGLSTICKMAPPERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKOPENGLSTICKMAPPERWRAP_CLASSDEF
#endif
};

#endif
