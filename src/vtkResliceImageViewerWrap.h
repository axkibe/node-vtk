/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKRESLICEIMAGEVIEWERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKRESLICEIMAGEVIEWERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkResliceImageViewer.h>

#include "vtkImageViewer2Wrap.h"

class VtkResliceImageViewerWrap : public VtkImageViewer2Wrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkResliceImageViewerWrap(vtkSmartPointer<vtkResliceImageViewer>);
		VtkResliceImageViewerWrap();
		~VtkResliceImageViewerWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInteractor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMeasurements(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointPlacer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResliceCursor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResliceCursorWidget(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResliceMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSliceScrollOnMouseWheel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetThickMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IncrementSlice(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Render(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Reset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColorLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColorWindow(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetResliceCursor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetResliceMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetResliceModeToAxisAligned(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetResliceModeToOblique(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSliceScrollOnMouseWheel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetThickMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SliceScrollOnMouseWheelOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SliceScrollOnMouseWheelOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
