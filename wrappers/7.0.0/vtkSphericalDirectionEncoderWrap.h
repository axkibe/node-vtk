/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSPHERICALDIRECTIONENCODERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSPHERICALDIRECTIONENCODERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkSphericalDirectionEncoder.h>

#include "vtkDirectionEncoderWrap.h"
#include "../../plus/plus.h"

class VtkSphericalDirectionEncoderWrap : public VtkDirectionEncoderWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkSphericalDirectionEncoderWrap(vtkSmartPointer<vtkSphericalDirectionEncoder>);
		VtkSphericalDirectionEncoderWrap();
		~VtkSphericalDirectionEncoderWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDecodedGradient(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEncodedDirection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfEncodedDirections(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKSPHERICALDIRECTIONENCODERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKSPHERICALDIRECTIONENCODERWRAP_CLASSDEF
#endif
};

#endif
