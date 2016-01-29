/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPOLYDATAMAPPER2DWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPOLYDATAMAPPER2DWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPolyDataMapper2D.h>

#include "vtkMapper2DWrap.h"

class VtkPolyDataMapper2DWrap : public VtkMapper2DWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPolyDataMapper2DWrap(vtkSmartPointer<vtkPolyDataMapper2D>);
		VtkPolyDataMapper2DWrap();
		~VtkPolyDataMapper2DWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ColorByArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CreateDefaultLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetArrayAccessMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetArrayId(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetColorMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetColorModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTransformCoordinate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTransformCoordinateUseDouble(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseLookupTableScalarRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MapScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ScalarVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ScalarVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColorMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColorModeToDefault(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColorModeToMapScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarModeToDefault(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarModeToUseCellData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarModeToUseCellFieldData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarModeToUsePointData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarModeToUsePointFieldData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTransformCoordinate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTransformCoordinateUseDouble(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseLookupTableScalarRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TransformCoordinateUseDoubleOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TransformCoordinateUseDoubleOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseLookupTableScalarRangeOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseLookupTableScalarRangeOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
