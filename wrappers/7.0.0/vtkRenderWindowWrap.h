/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKRENDERWINDOWWRAP_H
#define NATIVE_EXTENSION_VTK_VTKRENDERWINDOWWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkRenderWindow.h>

#include "vtkWindowWrap.h"
#include "../../plus/plus.h"

class VtkRenderWindowWrap : public VtkWindowWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkRenderWindowWrap(vtkSmartPointer<vtkRenderWindow>);
		VtkRenderWindowWrap();
		~VtkRenderWindowWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AlphaBitPlanesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AlphaBitPlanesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BordersOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BordersOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CaptureGL2PSSpecialProps(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CheckAbortStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CheckInRenderStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ClearInRenderStatus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CopyResultFrame(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FullScreenOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FullScreenOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAAFrames(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAbortRender(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAlphaBitPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAnaglyphColorMask(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAnaglyphColorSaturation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAnaglyphColorSaturationMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAnaglyphColorSaturationMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBorders(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCapturingGL2PSSpecialProps(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCurrentCursor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDesiredUpdateRate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDeviceIndex(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFDFrames(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFullScreen(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInAbortCheck(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInteractor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIsPicking(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLineSmoothing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMultiSamples(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNeverRendered(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfDevices(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfLayers(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfLayersMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfLayersMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointSmoothing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPolygonSmoothing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRenderLibrary(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRenderers(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStencilCapable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStereoCapableWindow(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStereoRender(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStereoType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStereoTypeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSubFrames(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSwapBuffers(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseConstantFDOffsets(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZbufferDataAtPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InitializeFromCurrentContext(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsDirect(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsDrawable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsPickingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsPickingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LineSmoothingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LineSmoothingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MakeRenderWindowInteractor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PointSmoothingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PointSmoothingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PolygonSmoothingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PolygonSmoothingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Render(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReportCapabilities(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAAFrames(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAbortRender(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAlphaBitPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAnaglyphColorMask(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAnaglyphColorSaturation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBorders(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCurrentCursor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCursorPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDesiredUpdateRate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDeviceIndex(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFDFrames(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetForceMakeCurrent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInAbortCheck(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInteractor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIsPicking(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLineSmoothing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMultiSamples(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfLayers(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPointSmoothing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPolygonSmoothing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStencilCapable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStereoCapableWindow(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStereoRender(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStereoType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStereoTypeToAnaglyph(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStereoTypeToCheckerboard(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStereoTypeToCrystalEyes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStereoTypeToDresden(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStereoTypeToFake(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStereoTypeToInterlaced(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStereoTypeToLeft(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStereoTypeToRedBlue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStereoTypeToRight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStereoTypeToSplitViewportHorizontal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSubFrames(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSwapBuffers(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseConstantFDOffsets(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StencilCapableOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StencilCapableOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StereoCapableWindowOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StereoCapableWindowOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StereoMidpoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StereoRenderComplete(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StereoRenderOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StereoRenderOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void StereoUpdate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SupportsOpenGL(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SwapBuffersOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SwapBuffersOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKRENDERWINDOWWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKRENDERWINDOWWRAP_CLASSDEF
#endif
};

#endif
