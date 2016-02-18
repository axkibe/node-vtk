/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKEXTRACTSELECTIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKEXTRACTSELECTIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkExtractSelection.h>

#include "vtkExtractSelectionBaseWrap.h"
#include "../../plus/plus.h"

class VtkExtractSelectionWrap : public VtkExtractSelectionBaseWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkExtractSelectionWrap(vtkSmartPointer<vtkExtractSelection>);
		VtkExtractSelectionWrap();
		~VtkExtractSelectionWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShowBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseProbeForLocations(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShowBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseProbeForLocations(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShowBoundsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShowBoundsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseProbeForLocationsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseProbeForLocationsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKEXTRACTSELECTIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKEXTRACTSELECTIONWRAP_CLASSDEF
#endif
};

#endif
