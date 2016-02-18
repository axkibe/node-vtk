/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKRESLICEIMAGEVIEWERMEASUREMENTSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKRESLICEIMAGEVIEWERMEASUREMENTSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkResliceImageViewerMeasurements.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkResliceImageViewerMeasurementsWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkResliceImageViewerMeasurementsWrap(vtkSmartPointer<vtkResliceImageViewerMeasurements>);
		VtkResliceImageViewerMeasurementsWrap();
		~VtkResliceImageViewerMeasurementsWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddItem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProcessEvents(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProcessEventsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProcessEventsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResliceImageViewer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ProcessEventsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ProcessEventsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveAllItems(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveItem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Render(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProcessEvents(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetResliceImageViewer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Update(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKRESLICEIMAGEVIEWERMEASUREMENTSWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKRESLICEIMAGEVIEWERMEASUREMENTSWRAP_CLASSDEF
#endif
};

#endif
