/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGEANISOTROPICDIFFUSION3DWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGEANISOTROPICDIFFUSION3DWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageAnisotropicDiffusion3D.h>

#include "vtkImageSpatialAlgorithmWrap.h"

class VtkImageAnisotropicDiffusion3DWrap : public VtkImageSpatialAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkImageAnisotropicDiffusion3DWrap(vtkSmartPointer<vtkImageAnisotropicDiffusion3D>);
		VtkImageAnisotropicDiffusion3DWrap();
		~VtkImageAnisotropicDiffusion3DWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CornersOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CornersOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EdgesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EdgesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FacesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FacesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCorners(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDiffusionFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDiffusionThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdges(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFaces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGradientMagnitudeThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfIterations(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GradientMagnitudeThresholdOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GradientMagnitudeThresholdOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCorners(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDiffusionFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDiffusionThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEdges(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFaces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGradientMagnitudeThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfIterations(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif