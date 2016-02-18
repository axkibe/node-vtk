/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKDEPTHPEELINGPASSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKDEPTHPEELINGPASSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkDepthPeelingPass.h>

#include "vtkRenderPassWrap.h"
#include "../../plus/plus.h"

class VtkDepthPeelingPassWrap : public VtkRenderPassWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkDepthPeelingPassWrap(vtkSmartPointer<vtkDepthPeelingPass>);
		VtkDepthPeelingPassWrap();
		~VtkDepthPeelingPassWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLastRenderingUsedDepthPeeling(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumNumberOfPeels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOcclusionRatio(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOcclusionRatioMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOcclusionRatioMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTranslucentPass(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumNumberOfPeels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOcclusionRatio(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTranslucentPass(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKDEPTHPEELINGPASSWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKDEPTHPEELINGPASSWRAP_CLASSDEF
#endif
};

#endif
