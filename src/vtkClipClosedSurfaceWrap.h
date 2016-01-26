/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCLIPCLOSEDSURFACEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCLIPCLOSEDSURFACEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkClipClosedSurface.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkClipClosedSurfaceWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkClipClosedSurfaceWrap(vtkSmartPointer<vtkClipClosedSurface>);
		VtkClipClosedSurfaceWrap();
		~VtkClipClosedSurfaceWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GenerateFacesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateFacesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateOutlineOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateOutlineOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActivePlaneId(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClippingPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGenerateFaces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGenerateOutline(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPassPointData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTriangulationErrorDisplay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PassPointDataOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PassPointDataOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetActivePlaneColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetActivePlaneId(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBaseColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetClipColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetClippingPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGenerateFaces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGenerateOutline(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPassPointData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarModeToColors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarModeToLabels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarModeToNone(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTriangulationErrorDisplay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TriangulationErrorDisplayOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TriangulationErrorDisplayOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
