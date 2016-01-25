/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCONTOURREPRESENTATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCONTOURREPRESENTATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkContourRepresentation.h>

#include "vtkWidgetRepresentationWrap.h"

class VtkContourRepresentationWrap : public VtkWidgetRepresentationWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkContourRepresentationWrap(vtkSmartPointer<vtkContourRepresentation>);
		VtkContourRepresentationWrap();
		~VtkContourRepresentationWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ActivateNode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AddNodeAtDisplayPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AddNodeAtWorldPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AddNodeOnContour(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ClearAllNodes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ClosedLoopOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ClosedLoopOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeleteActiveNode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeleteLastNode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeleteNthNode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActiveNodeSelected(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClosedLoop(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetContourRepresentationAsPolyData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCurrentOperation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCurrentOperationMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCurrentOperationMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLineInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNodePolyData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNthNodeSelected(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfIntermediatePoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfNodes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPixelTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPixelToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPixelToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointPlacer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShowSelectedNodes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWorldTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWorldToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWorldToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetActiveNodeToDisplayPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetClosedLoop(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCurrentOperation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCurrentOperationToInactive(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCurrentOperationToScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCurrentOperationToShift(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCurrentOperationToTranslate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLineInterpolator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNthNodeDisplayPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNthNodeSelected(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPixelTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPointPlacer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShowSelectedNodes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWorldTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShowSelectedNodesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShowSelectedNodesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ToggleActiveNodeSelected(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
