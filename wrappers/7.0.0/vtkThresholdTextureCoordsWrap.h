/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTHRESHOLDTEXTURECOORDSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTHRESHOLDTEXTURECOORDSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkThresholdTextureCoords.h>

#include "vtkDataSetAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkThresholdTextureCoordsWrap : public VtkDataSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkThresholdTextureCoordsWrap(vtkSmartPointer<vtkThresholdTextureCoords>);
		VtkThresholdTextureCoordsWrap();
		~VtkThresholdTextureCoordsWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInTextureCoord(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLowerThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutTextureCoord(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextureDimension(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextureDimensionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextureDimensionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUpperThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInTextureCoord(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutTextureCoord(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTextureDimension(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ThresholdBetween(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ThresholdByLower(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ThresholdByUpper(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKTHRESHOLDTEXTURECOORDSWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKTHRESHOLDTEXTURECOORDSWRAP_CLASSDEF
#endif
};

#endif
