/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKREEBGRAPHSIMPLIFICATIONMETRICWRAP_H
#define NATIVE_EXTENSION_VTK_VTKREEBGRAPHSIMPLIFICATIONMETRICWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkReebGraphSimplificationMetric.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkReebGraphSimplificationMetricWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkReebGraphSimplificationMetricWrap(vtkSmartPointer<vtkReebGraphSimplificationMetric>);
		VtkReebGraphSimplificationMetricWrap();
		~VtkReebGraphSimplificationMetricWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLowerBound(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUpperBound(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLowerBound(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUpperBound(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKREEBGRAPHSIMPLIFICATIONMETRICWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKREEBGRAPHSIMPLIFICATIONMETRICWRAP_CLASSDEF
#endif
};

#endif
