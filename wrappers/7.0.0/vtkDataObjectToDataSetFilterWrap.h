/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKDATAOBJECTTODATASETFILTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKDATAOBJECTTODATASETFILTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkDataObjectToDataSetFilter.h>

#include "vtkDataSetAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkDataObjectToDataSetFilterWrap : public VtkDataSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkDataObjectToDataSetFilterWrap(vtkSmartPointer<vtkDataObjectToDataSetFilter>);
		VtkDataObjectToDataSetFilterWrap();
		~VtkDataObjectToDataSetFilterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void DefaultNormalizeOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DefaultNormalizeOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellConnectivityComponentArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellConnectivityComponentArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellConnectivityComponentMaxRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellConnectivityComponentMinRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellTypeComponentArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellTypeComponentArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellTypeComponentMaxRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellTypeComponentMinRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataSetType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDefaultNormalize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLinesComponentArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLinesComponentArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLinesComponentMaxRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLinesComponentMinRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointComponentArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointComponentArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointComponentMaxRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointComponentMinRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointComponentNormailzeFlag(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPolyDataOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPolysComponentArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPolysComponentArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPolysComponentMaxRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPolysComponentMinRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRectilinearGridOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStripsComponentArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStripsComponentArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStripsComponentMaxRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStripsComponentMinRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStructuredGridOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStructuredPointsOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUnstructuredGridOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVertsComponentArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVertsComponentArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVertsComponentMaxRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVertsComponentMinRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCellConnectivityComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCellTypeComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataSetType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataSetTypeToPolyData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataSetTypeToRectilinearGrid(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataSetTypeToStructuredGrid(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataSetTypeToStructuredPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataSetTypeToUnstructuredGrid(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDefaultNormalize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDimensionsComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLinesComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOriginComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPointComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPolysComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSpacingComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStripsComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVertsComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKDATAOBJECTTODATASETFILTERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKDATAOBJECTTODATASETFILTERWRAP_CLASSDEF
#endif
};

#endif
