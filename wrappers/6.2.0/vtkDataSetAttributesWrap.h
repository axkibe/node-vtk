/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKDATASETATTRIBUTESWRAP_H
#define NATIVE_EXTENSION_VTK_VTKDATASETATTRIBUTESWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkDataSetAttributes.h>

#include "vtkFieldDataWrap.h"
#include "../../plus/plus.h"

class VtkDataSetAttributesWrap : public VtkFieldDataWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkDataSetAttributesWrap(vtkSmartPointer<vtkDataSetAttributes>);
		VtkDataSetAttributesWrap();
		~VtkDataSetAttributesWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CopyAllOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CopyAllOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CopyData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CopyGlobalIdsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CopyGlobalIdsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CopyNormalsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CopyNormalsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CopyPedigreeIdsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CopyPedigreeIdsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CopyScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CopyScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CopyTCoordsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CopyTCoordsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CopyTensorsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CopyTensorsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CopyTuples(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CopyVectorsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CopyVectorsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAbstractAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAttributeTypeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCopyGlobalIds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCopyNormals(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCopyPedigreeIds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCopyScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCopyTCoords(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCopyTensors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCopyVectors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGlobalIds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLongAttributeTypeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNormals(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPedigreeIds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTCoords(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTensors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVectors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsArrayAnAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PassData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetActiveAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetActiveGlobalIds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetActiveNormals(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetActivePedigreeIds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetActiveScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetActiveTCoords(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetActiveTensors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetActiveVectors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCopyAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCopyGlobalIds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCopyNormals(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCopyPedigreeIds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCopyScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCopyTCoords(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCopyTensors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCopyVectors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGlobalIds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNormals(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPedigreeIds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTCoords(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTensors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVectors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Update(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKDATASETATTRIBUTESWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKDATASETATTRIBUTESWRAP_CLASSDEF
#endif
};

#endif
