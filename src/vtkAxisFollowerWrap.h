/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKAXISFOLLOWERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKAXISFOLLOWERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAxisFollower.h>

#include "vtkFollowerWrap.h"

class VtkAxisFollowerWrap : public VtkFollowerWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkAxisFollowerWrap(vtkSmartPointer<vtkAxisFollower>);
		VtkAxisFollowerWrap();
		~VtkAxisFollowerWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AutoCenterOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AutoCenterOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeTransformMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAutoCenter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDistanceLODThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDistanceLODThresholdMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDistanceLODThresholdMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEnableDistanceLOD(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEnableViewAngleLOD(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScreenOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetViewAngleLODThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetViewAngleLODThresholdMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetViewAngleLODThresholdMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Render(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAutoCenter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDistanceLODThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEnableDistanceLOD(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEnableViewAngleLOD(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScreenOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetViewAngleLODThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
