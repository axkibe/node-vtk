/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKHYPEROCTREESAMPLEFUNCTIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKHYPEROCTREESAMPLEFUNCTIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkHyperOctreeSampleFunction.h>

#include "vtkHyperOctreeAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkHyperOctreeSampleFunctionWrap : public VtkHyperOctreeAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkHyperOctreeSampleFunctionWrap(vtkSmartPointer<vtkHyperOctreeSampleFunction>);
		VtkHyperOctreeSampleFunctionWrap();
		~VtkHyperOctreeSampleFunctionWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetDepth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDimension(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImplicitFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLevels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinLevels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDepth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDimension(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetImplicitFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLevels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMinLevels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarTypeToChar(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarTypeToDouble(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarTypeToFloat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarTypeToInt(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarTypeToLong(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarTypeToShort(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarTypeToUnsignedChar(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarTypeToUnsignedInt(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarTypeToUnsignedLong(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarTypeToUnsignedShort(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKHYPEROCTREESAMPLEFUNCTIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKHYPEROCTREESAMPLEFUNCTIONWRAP_CLASSDEF
#endif
};

#endif
