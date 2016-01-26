/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGENERICENSIGHTREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGENERICENSIGHTREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGenericEnSightReader.h>

#include "vtkMultiBlockDataSetAlgorithmWrap.h"

class VtkGenericEnSightReaderWrap : public VtkMultiBlockDataSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkGenericEnSightReaderWrap(vtkSmartPointer<vtkGenericEnSightReader>);
		VtkGenericEnSightReaderWrap();
		~VtkGenericEnSightReaderWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CanReadFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DetermineEnSightVersion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetByteOrder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetByteOrderAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCaseFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellDataArraySelection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComplexDescription(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComplexVariableType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDescription(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEnSightVersion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFilePath(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGeometryFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfCellArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfComplexScalarsPerElement(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfComplexScalarsPerNode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfComplexVariables(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfComplexVectorsPerElement(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfComplexVectorsPerNode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPointArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfScalarsPerElement(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfScalarsPerMeasuredNode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfScalarsPerNode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfTensorsSymmPerElement(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfTensorsSymmPerNode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfVariables(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfVectorsPerElement(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfVectorsPerMeasuredNode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfVectorsPerNode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetParticleCoordinatesByIndex(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointDataArraySelection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetReadAllVariables(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetReader(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTimeSets(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVariableType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ParticleCoordinatesByIndexOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ParticleCoordinatesByIndexOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadAllVariablesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadAllVariablesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetByteOrder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetByteOrderToBigEndian(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetByteOrderToLittleEndian(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCaseFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCellArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFilePath(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetParticleCoordinatesByIndex(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPointArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetReadAllVariables(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
