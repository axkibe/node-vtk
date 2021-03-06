/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKFIXEDPOINTVOLUMERAYCASTMIPHELPERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKFIXEDPOINTVOLUMERAYCASTMIPHELPERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkFixedPointVolumeRayCastMIPHelper.h>

#include "vtkFixedPointVolumeRayCastHelperWrap.h"
#include "../../plus/plus.h"

class VtkFixedPointVolumeRayCastMIPHelperWrap : public VtkFixedPointVolumeRayCastHelperWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkFixedPointVolumeRayCastMIPHelperWrap(vtkSmartPointer<vtkFixedPointVolumeRayCastMIPHelper>);
		VtkFixedPointVolumeRayCastMIPHelperWrap();
		~VtkFixedPointVolumeRayCastMIPHelperWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GenerateImage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKFIXEDPOINTVOLUMERAYCASTMIPHELPERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKFIXEDPOINTVOLUMERAYCASTMIPHELPERWRAP_CLASSDEF
#endif
};

#endif
