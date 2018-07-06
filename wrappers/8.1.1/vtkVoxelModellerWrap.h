/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKVOXELMODELLERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKVOXELMODELLERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkVoxelModeller.h>

#include "vtkImageAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkVoxelModellerWrap : public VtkImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkVoxelModellerWrap(vtkSmartPointer<vtkVoxelModeller>);
		VtkVoxelModellerWrap();
		~VtkVoxelModellerWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ComputeModelBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBackgroundValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetForegroundValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumDistanceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumDistanceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetModelBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSampleDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBackgroundValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetForegroundValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetModelBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSampleDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarTypeToBit(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarTypeToChar(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarTypeToDouble(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarTypeToFloat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarTypeToInt(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarTypeToLong(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarTypeToShort(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarTypeToUnsignedChar(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarTypeToUnsignedInt(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarTypeToUnsignedLong(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarTypeToUnsignedShort(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKVOXELMODELLERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKVOXELMODELLERWRAP_CLASSDEF
#endif
};

#endif
