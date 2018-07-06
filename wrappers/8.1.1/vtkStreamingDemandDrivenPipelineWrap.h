/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSTREAMINGDEMANDDRIVENPIPELINEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSTREAMINGDEMANDDRIVENPIPELINEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkStreamingDemandDrivenPipeline.h>

#include "vtkDemandDrivenPipelineWrap.h"
#include "../../plus/plus.h"

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
		static void EXACT_EXTENT(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRequestExactExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUpdateExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUpdateGhostLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUpdateNumberOfPieces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUpdatePiece(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PropagateTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PropagateUpdateExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void REQUEST_TIME_DEPENDENT_INFORMATION(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void REQUEST_UPDATE_EXTENT(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void REQUEST_UPDATE_TIME(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRequestExactExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TIME_DEPENDENT_INFORMATION(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TIME_RANGE(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TIME_STEPS(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UNRESTRICTED_UPDATE_EXTENT(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UPDATE_EXTENT(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UPDATE_EXTENT_INITIALIZED(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UPDATE_NUMBER_OF_GHOST_LEVELS(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UPDATE_NUMBER_OF_PIECES(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UPDATE_PIECE_NUMBER(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UPDATE_TIME_STEP(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Update(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdateTimeDependentInformation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdateWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WHOLE_EXTENT(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKSTREAMINGDEMANDDRIVENPIPELINEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKSTREAMINGDEMANDDRIVENPIPELINEWRAP_CLASSDEF
#endif
};

#endif
