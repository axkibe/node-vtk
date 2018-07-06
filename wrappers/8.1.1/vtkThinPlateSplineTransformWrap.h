/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTHINPLATESPLINETRANSFORMWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTHINPLATESPLINETRANSFORMWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkThinPlateSplineTransform.h>

#include "vtkWarpTransformWrap.h"
#include "../../plus/plus.h"

class VtkThinPlateSplineTransformWrap : public VtkWarpTransformWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkThinPlateSplineTransformWrap(vtkSmartPointer<vtkThinPlateSplineTransform>);
		VtkThinPlateSplineTransformWrap();
		~VtkThinPlateSplineTransformWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetBasis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBasisAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSigma(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSourceLandmarks(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTargetLandmarks(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MakeTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBasis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBasisToR(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBasisToR2LogR(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSigma(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSourceLandmarks(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTargetLandmarks(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKTHINPLATESPLINETRANSFORMWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKTHINPLATESPLINETRANSFORMWRAP_CLASSDEF
#endif
};

#endif
