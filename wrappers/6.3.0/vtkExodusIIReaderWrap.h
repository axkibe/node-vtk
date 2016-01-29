/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKEXODUSIIREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKEXODUSIIREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkExodusIIReader.h>

#include "vtkMultiBlockDataSetAlgorithmWrap.h"

class VtkExodusIIReaderWrap : public VtkMultiBlockDataSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkExodusIIReaderWrap(vtkSmartPointer<vtkExodusIIReader>);
		VtkExodusIIReaderWrap();
		~VtkExodusIIReaderWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AnimateModeShapesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AnimateModeShapesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ApplyDisplacementsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ApplyDisplacementsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CanReadFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Dump(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateFileIdArrayOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateFileIdArrayOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateGlobalElementIdArrayOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateGlobalElementIdArrayOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateGlobalNodeIdArrayOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateGlobalNodeIdArrayOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateImplicitElementIdArrayOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateImplicitElementIdArrayOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateImplicitNodeIdArrayOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateImplicitNodeIdArrayOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateObjectIdCellArrayOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateObjectIdCellArrayOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAnimateModeShapes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetApplyDisplacements(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAssemblyArrayID(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAssemblyArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAssemblyArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCacheSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDimensionality(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDisplayType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdgeBlockArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdgeBlockArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdgeMapArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdgeMapArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdgeResultArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdgeResultArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdgeSetArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdgeSetArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdgeSetResultArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdgeSetResultArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetElementBlockArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetElementBlockArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetElementMapArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetElementMapArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetElementResultArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetElementResultArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetElementSetArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetElementSetArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetElementSetResultArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetElementSetResultArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFaceBlockArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFaceBlockArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFaceMapArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFaceMapArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFaceResultArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFaceResultArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFaceSetArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFaceSetArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFaceSetResultArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFaceSetResultArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileId(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGenerateFileIdArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGenerateGlobalElementIdArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGenerateGlobalNodeIdArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGenerateImplicitElementIdArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGenerateImplicitNodeIdArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGenerateObjectIdCellArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGlobalEdgeID(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGlobalEdgeIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGlobalElementID(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGlobalElementIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGlobalFaceID(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGlobalFaceIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGlobalNodeID(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGlobalNodeIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGlobalResultArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGlobalResultArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHasModeShapes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHierarchyArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHierarchyArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImplicitEdgeIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImplicitElementIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImplicitFaceIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImplicitNodeIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaterialArrayID(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaterialArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaterialArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetModeShapeTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNodeMapArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNodeMapArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNodeSetArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNodeSetArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNodeSetResultArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNodeSetResultArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfAssemblyArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfEdgeBlockArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfEdgeMapArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfEdgeResultArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfEdgeSetArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfEdgeSetResultArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfEdgesInFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfElementBlockArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfElementMapArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfElementResultArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfElementSetArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfElementSetResultArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfElementsInFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfEntriesInObject(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfFaceBlockArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfFaceMapArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfFaceResultArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfFaceSetArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfFaceSetResultArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfFacesInFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfGlobalResultArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfHierarchyArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfMaterialArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfNodeMapArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfNodeSetArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfNodeSetResultArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfNodes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfNodesInFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfObjectArrayComponents(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfObjectArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfObjectAttributes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfObjects(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPartArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPointResultArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfSideSetArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfSideSetResultArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfTimeSteps(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetObjectArrayIndex(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetObjectArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetObjectArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetObjectAttributeIndex(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetObjectAttributeName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetObjectAttributeStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetObjectId(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetObjectIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetObjectIndex(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetObjectName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetObjectStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetObjectTypeFromName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetObjectTypeName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPartArrayID(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPartArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPartArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPartBlockInfo(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPedigreeEdgeIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPedigreeElementIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPedigreeFaceIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPedigreeNodeIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointResultArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointResultArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSIL(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSILUpdateStamp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSideSetArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSideSetArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSideSetResultArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSideSetResultArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSideSetSourceElementIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSideSetSourceElementSideArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSqueezePoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTimeSeriesData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTimeStep(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTitle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVariableID(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXMLFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasModeShapesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasModeShapesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsValidVariable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Reset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ResetCache(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ResetSettings(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAllArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAnimateModeShapes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetApplyDisplacements(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAssemblyArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCacheSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDisplayType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEdgeBlockArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEdgeMapArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEdgeResultArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEdgeSetArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEdgeSetResultArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetElementBlockArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetElementMapArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetElementResultArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetElementSetArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetElementSetResultArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFaceBlockArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFaceMapArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFaceResultArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFaceSetArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFaceSetResultArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileId(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGenerateFileIdArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGenerateGlobalElementIdArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGenerateGlobalNodeIdArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGenerateImplicitElementIdArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGenerateImplicitNodeIdArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGenerateObjectIdCellArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGlobalResultArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHasModeShapes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHierarchyArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaterialArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetModeShape(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetModeShapeTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNodeMapArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNodeSetArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNodeSetResultArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetObjectArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetObjectAttributeStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetObjectStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPartArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPointResultArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSideSetArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSideSetResultArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSqueezePoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTimeStep(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXMLFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
