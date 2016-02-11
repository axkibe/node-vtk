/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKUNSTRUCTUREDGRIDVOLUMERAYCASTMAPPERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKUNSTRUCTUREDGRIDVOLUMERAYCASTMAPPERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkUnstructuredGridVolumeRayCastMapper.h>

#include "vtkUnstructuredGridVolumeMapperWrap.h"

class VtkUnstructuredGridVolumeRayCastMapperWrap : public VtkUnstructuredGridVolumeMapperWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkUnstructuredGridVolumeRayCastMapperWrap(vtkSmartPointer<vtkUnstructuredGridVolumeRayCastMapper>);
		VtkUnstructuredGridVolumeRayCastMapperWrap();
		~VtkUnstructuredGridVolumeRayCastMapperWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AutoAdjustSampleDistancesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AutoAdjustSampleDistancesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CastRays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAutoAdjustSampleDistances(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAutoAdjustSampleDistancesMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAutoAdjustSampleDistancesMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImageInUseSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImageOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImageViewportSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIntermixIntersectingGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIntermixIntersectingGeometryMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIntermixIntersectingGeometryMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfThreads(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRayCastFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRayIntegrator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IntermixIntersectingGeometryOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IntermixIntersectingGeometryOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Render(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAutoAdjustSampleDistances(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIntermixIntersectingGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfThreads(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRayCastFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRayIntegrator(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
