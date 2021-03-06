/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKDATAREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKDATAREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkDataReader.h>

#include "vtkAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkDataReaderWrap : public VtkAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkDataReaderWrap(vtkSmartPointer<vtkDataReader>);
		VtkDataReaderWrap();
		~VtkDataReaderWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CloseVTKFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFieldDataName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFieldDataNameInFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileMajorVersion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileMinorVersion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHeader(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInputArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInputString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInputStringLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLookupTableName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNormalsName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNormalsNameInFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfFieldDataInFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfNormalsInFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfScalarsInFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfTCoordsInFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfTensorsInFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfVectorsInFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetReadAllColorScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetReadAllFields(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetReadAllNormals(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetReadAllScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetReadAllTCoords(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetReadAllTensors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetReadAllVectors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetReadFromInputString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarsName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarsNameInFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTCoordsName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTCoordsNameInFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTensorsName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTensorsNameInFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVectorsName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVectorsNameInFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsFilePolyData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsFileRectilinearGrid(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsFileStructuredGrid(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsFileStructuredPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsFileUnstructuredGrid(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsFileValid(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OpenVTKFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Read(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadAllColorScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadAllColorScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadAllFieldsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadAllFieldsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadAllNormalsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadAllNormalsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadAllScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadAllScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadAllTCoordsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadAllTCoordsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadAllTensorsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadAllTensorsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadAllVectorsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadAllVectorsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadCellData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadCoordinates(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadEdgeData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadFromInputStringOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadFromInputStringOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadHeader(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadLine(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadMetaData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadPointData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadRowData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadVertexData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBinaryInputString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFieldDataName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLookupTableName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNormalsName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetReadAllColorScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetReadAllFields(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetReadAllNormals(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetReadAllScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetReadAllTCoords(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetReadAllTensors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetReadAllVectors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetReadFromInputString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarsName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTCoordsName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTensorsName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVectorsName(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKDATAREADERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKDATAREADERWRAP_CLASSDEF
#endif
};

#endif
