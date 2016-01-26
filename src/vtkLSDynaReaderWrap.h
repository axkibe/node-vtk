/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKLSDYNAREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKLSDYNAREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkLSDynaReader.h>

#include "vtkMultiBlockDataSetAlgorithmWrap.h"

class VtkLSDynaReaderWrap : public VtkMultiBlockDataSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkLSDynaReaderWrap(vtkSmartPointer<vtkLSDynaReader>);
		VtkLSDynaReaderWrap();
		~VtkLSDynaReaderWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CanReadFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DebugDump(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeformedMeshOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeformedMeshOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeletedCellsAsGhostArrayOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeletedCellsAsGhostArrayOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBeamArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBeamArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDatabaseDirectory(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDeformedMesh(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDeletedCellsAsGhostArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDimensionality(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInputDeck(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfBeamArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfCellArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfComponentsInBeamArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfComponentsInCellArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfComponentsInParticleArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfComponentsInPointArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfComponentsInRigidBodyArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfComponentsInRoadSurfaceArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfComponentsInShellArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfComponentsInSolidArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfComponentsInThickShellArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPartArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfParticleArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPointArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfRigidBodyArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfRoadSurfaceArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfShellArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfSolidArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfThickShellArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPartArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPartArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetParticleArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetParticleArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRemoveDeletedCells(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRigidBodyArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRigidBodyArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRoadSurfaceArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRoadSurfaceArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShellArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShellArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSolidArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSolidArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetThickShellArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetThickShellArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTitle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsDatabaseValid(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveDeletedCellsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveDeletedCellsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBeamArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCellArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDatabaseDirectory(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDeformedMesh(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDeletedCellsAsGhostArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputDeck(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPartArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetParticleArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPointArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRemoveDeletedCells(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRigidBodyArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRoadSurfaceArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShellArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSolidArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetThickShellArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTimeStepRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
