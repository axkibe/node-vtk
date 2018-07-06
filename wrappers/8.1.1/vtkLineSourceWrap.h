/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKLINESOURCEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKLINESOURCEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkLineSource.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkLineSourceWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkLineSourceWrap(vtkSmartPointer<vtkLineSource>);
		VtkLineSourceWrap();
		~VtkLineSourceWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoint1(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoint2(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResolutionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResolutionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPoint1(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPoint2(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKLINESOURCEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKLINESOURCEWRAP_CLASSDEF
#endif
};

#endif