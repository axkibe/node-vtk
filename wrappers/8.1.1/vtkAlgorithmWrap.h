/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKALGORITHMWRAP_H
#define NATIVE_EXTENSION_VTK_VTKALGORITHMWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAlgorithm.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkAlgorithmWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkAlgorithmWrap(vtkSmartPointer<vtkAlgorithm>);
		VtkAlgorithmWrap();
		~VtkAlgorithmWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AbortExecuteOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AbortExecuteOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AddInputConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AddInputDataObject(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CAN_HANDLE_PIECE_REQUEST(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CAN_PRODUCE_SUB_EXTENT(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAbortExecute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetErrorCode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetExecutive(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInformation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInputAlgorithm(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInputArrayInformation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInputConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInputDataObject(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInputExecutive(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInputInformation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInputPortInformation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfInputConnections(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfInputPorts(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfOutputPorts(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputDataObject(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputInformation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputPort(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputPortInformation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProgress(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProgressMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProgressMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProgressObserver(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProgressText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetReleaseDataFlag(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTotalNumberOfInputConnections(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUpdateExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUpdateGhostLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUpdateNumberOfPieces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUpdatePiece(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasExecutive(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void INPUT_ARRAYS_TO_PROCESS(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void INPUT_CONNECTION(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void INPUT_IS_OPTIONAL(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void INPUT_IS_REPEATABLE(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void INPUT_PORT(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void INPUT_REQUIRED_DATA_TYPE(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void INPUT_REQUIRED_FIELDS(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ModifyRequest(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ProcessRequest(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PropagateUpdateExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseDataFlagOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseDataFlagOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveAllInputConnections(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveAllInputs(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveInputConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAbortExecute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDefaultExecutivePrototype(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetExecutive(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInformation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputArrayToProcess(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputDataObject(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProgress(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProgressObserver(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProgressText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetReleaseDataFlag(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Update(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdateDataObject(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdateExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdateExtentIsEmpty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdateInformation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdatePiece(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdateProgress(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdateTimeStep(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdateWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKALGORITHMWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKALGORITHMWRAP_CLASSDEF
#endif
};

#endif
