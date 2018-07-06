/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKVOLUMEPICKERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKVOLUMEPICKERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkVolumePicker.h>

#include "vtkCellPickerWrap.h"
#include "../../plus/plus.h"

class VtkVolumePickerWrap : public VtkCellPickerWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkVolumePickerWrap(vtkSmartPointer<vtkVolumePicker>);
		VtkVolumePickerWrap();
		~VtkVolumePickerWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetCroppingPlaneId(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPickCroppingPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PickCroppingPlanesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PickCroppingPlanesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPickCroppingPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKVOLUMEPICKERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKVOLUMEPICKERWRAP_CLASSDEF
#endif
};

#endif
