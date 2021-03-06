/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGESHIFTSCALEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGESHIFTSCALEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageShiftScale.h>

#include "vtkThreadedImageAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkImageShiftScaleWrap : public VtkThreadedImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageShiftScaleWrap(vtkSmartPointer<vtkImageShiftScale>);
		VtkImageShiftScaleWrap();
		~VtkImageShiftScaleWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ClampOverflowOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ClampOverflowOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClampOverflow(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShift(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetClampOverflow(const Nan::FunctionCallbackInfo<v8::Value>& info);
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
		static void SetScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShift(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKIMAGESHIFTSCALEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKIMAGESHIFTSCALEWRAP_CLASSDEF
#endif
};

#endif
