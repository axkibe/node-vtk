/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSTREAMINGDEMANDDRIVENPIPELINEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSTREAMINGDEMANDDRIVENPIPELINEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkStreamingDemandDrivenPipeline.h>

#include "vtkDemandDrivenPipelineWrap.h"

class VtkStreamingDemandDrivenPipelineWrap : public VtkDemandDrivenPipelineWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkStreamingDemandDrivenPipelineWrap(vtkSmartPointer<vtkStreamingDemandDrivenPipeline>);
		VtkStreamingDemandDrivenPipelineWrap();
		~VtkStreamingDemandDrivenPipelineWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BOUNDS(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void COMBINED_UPDATE_EXTENT(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CONTINUE_EXECUTING(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputePriority(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EXACT_EXTENT(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EXTENT_TRANSLATOR(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FAST_PATH_FOR_TEMPORAL_DATA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FAST_PATH_ID_TYPE(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FAST_PATH_OBJECT_ID(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FAST_PATH_OBJECT_TYPE(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetExtentTranslator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumNumberOfPieces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRequestExactExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUpdateGhostLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUpdateNumberOfPieces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUpdatePiece(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUpdateResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MAXIMUM_NUMBER_OF_PIECES(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ORIGINAL_NUMBER_OF_CELLS(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PIECE_BOUNDING_BOX(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PIECE_NORMAL(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PRIORITY(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PropagateTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PropagateUpdateExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void REMOVE_ATTRIBUTE_INFORMATION(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void REQUEST_MANAGE_INFORMATION(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void REQUEST_RESOLUTION_PROPAGATE(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void REQUEST_TIME_DEPENDENT_INFORMATION(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void REQUEST_UPDATE_EXTENT(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void REQUEST_UPDATE_EXTENT_INFORMATION(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void REQUEST_UPDATE_TIME(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetExtentTranslator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumNumberOfPieces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRequestExactExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUpdateExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUpdateExtentToWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUpdateGhostLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUpdateNumberOfPieces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUpdatePiece(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUpdateResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUpdateTimeStep(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TIME_DEPENDENT_INFORMATION(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TIME_LABEL_ANNOTATION(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TIME_RANGE(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TIME_STEPS(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UNRESTRICTED_UPDATE_EXTENT(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UPDATE_AMR_LEVEL(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UPDATE_EXTENT(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UPDATE_EXTENT_INITIALIZED(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UPDATE_EXTENT_TRANSLATED(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UPDATE_NUMBER_OF_GHOST_LEVELS(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UPDATE_NUMBER_OF_PIECES(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UPDATE_PIECE_NUMBER(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UPDATE_RESOLUTION(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UPDATE_TIME_STEP(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Update(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdateTimeDependentInformation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdateWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WHOLE_BOUNDING_BOX(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WHOLE_EXTENT(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif