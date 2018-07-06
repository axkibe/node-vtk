/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGEOPROJECTIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGEOPROJECTIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGeoProjection.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkGeoProjectionWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkGeoProjectionWrap(vtkSmartPointer<vtkGeoProjection>);
		VtkGeoProjectionWrap();
		~VtkGeoProjectionWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ClearOptionalParameters(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCentralMeridian(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDescription(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIndex(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfOptionalParameters(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfProjections(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOptionalParameterKey(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOptionalParameterValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProjectionDescription(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProjectionName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveOptionalParameter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCentralMeridian(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOptionalParameter(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKGEOPROJECTIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKGEOPROJECTIONWRAP_CLASSDEF
#endif
};

#endif
