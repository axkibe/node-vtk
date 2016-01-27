/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSPLINEWIDGETWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSPLINEWIDGETWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkSplineWidget.h>

#include "vtk3DWidgetWrap.h"

class VtkSplineWidgetWrap : public Vtk3DWidgetWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkSplineWidgetWrap(vtkSmartPointer<vtkSplineWidget>);
		VtkSplineWidgetWrap();
		~VtkSplineWidgetWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ClosedOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ClosedOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClosed(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHandleProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfHandles(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetParametricSpline(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPolyData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProcessEvents(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProcessEventsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProcessEventsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProjectToPlane(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProjectionNormal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProjectionNormalMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProjectionNormalMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProjectionPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectedHandleProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectedLineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSummedLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InitializeHandles(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsClosed(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PlaceWidget(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ProcessEventsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ProcessEventsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ProjectToPlaneOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ProjectToPlaneOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetClosed(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHandlePosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHandleProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfHandles(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetParametricSpline(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPlaneSource(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProcessEvents(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProjectToPlane(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProjectionNormal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProjectionNormalToOblique(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProjectionNormalToXAxes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProjectionNormalToYAxes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProjectionNormalToZAxes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProjectionPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectedHandleProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectedLineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
