/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKLABELEDDATAMAPPERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKLABELEDDATAMAPPERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkLabeledDataMapper.h>

#include "vtkMapper2DWrap.h"

class VtkLabeledDataMapperWrap : public VtkMapper2DWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkLabeledDataMapperWrap(vtkSmartPointer<vtkLabeledDataMapper>);
		VtkLabeledDataMapperWrap();
		~VtkLabeledDataMapperWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CoordinateSystemDisplay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CoordinateSystemWorld(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCoordinateSystem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCoordinateSystemMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCoordinateSystemMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFieldDataArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFieldDataName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabeledComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfLabels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCoordinateSystem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFieldDataArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFieldDataName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelFormat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelModeToLabelFieldData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelModeToLabelIds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelModeToLabelNormals(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelModeToLabelScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelModeToLabelTCoords(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelModeToLabelTensors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelModeToLabelVectors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabeledComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
