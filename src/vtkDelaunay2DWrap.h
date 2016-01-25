/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKDELAUNAY2DWRAP_H
#define NATIVE_EXTENSION_VTK_VTKDELAUNAY2DWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkDelaunay2D.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkDelaunay2DWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkDelaunay2DWrap(vtkSmartPointer<vtkDelaunay2D>);
		VtkDelaunay2DWrap();
		~VtkDelaunay2DWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BoundingTriangulationOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BoundingTriangulationOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAlpha(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAlphaMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAlphaMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBoundingTriangulation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOffsetMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOffsetMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProjectionPlaneMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProjectionPlaneModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProjectionPlaneModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSource(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAlpha(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBoundingTriangulation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProjectionPlaneMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSourceConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSourceData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
