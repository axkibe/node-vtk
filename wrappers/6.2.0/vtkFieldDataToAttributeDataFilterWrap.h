/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKFIELDDATATOATTRIBUTEDATAFILTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKFIELDDATATOATTRIBUTEDATAFILTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkFieldDataToAttributeDataFilter.h>

#include "vtkDataSetAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkFieldDataToAttributeDataFilterWrap : public VtkDataSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkFieldDataToAttributeDataFilterWrap(vtkSmartPointer<vtkFieldDataToAttributeDataFilter>);
		VtkFieldDataToAttributeDataFilterWrap();
		~VtkFieldDataToAttributeDataFilterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void DefaultNormalizeOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DefaultNormalizeOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDefaultNormalize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFieldArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInputField(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNormalComponentArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNormalComponentArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNormalComponentMaxRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNormalComponentMinRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNormalComponentNormalizeFlag(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputAttributeData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarComponentArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarComponentArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarComponentMaxRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarComponentMinRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarComponentNormalizeFlag(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTCoordComponentArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTCoordComponentArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTCoordComponentMaxRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTCoordComponentMinRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTCoordComponentNormalizeFlag(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTensorComponentArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTensorComponentArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTensorComponentMaxRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTensorComponentMinRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTensorComponentNormalizeFlag(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVectorComponentArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVectorComponentArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVectorComponentMaxRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVectorComponentMinRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVectorComponentNormalizeFlag(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDefaultNormalize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputField(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputFieldToCellDataField(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputFieldToDataObjectField(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputFieldToPointDataField(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNormalComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputAttributeData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputAttributeDataToCellData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputAttributeDataToPointData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTCoordComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTensorComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVectorComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKFIELDDATATOATTRIBUTEDATAFILTERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKFIELDDATATOATTRIBUTEDATAFILTERWRAP_CLASSDEF
#endif
};

#endif
