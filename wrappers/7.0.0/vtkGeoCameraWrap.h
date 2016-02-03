/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGEOCAMERAWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGEOCAMERAWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGeoCamera.h>

#include "vtkObjectWrap.h"

class VtkGeoCameraWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkGeoCameraWrap(vtkSmartPointer<vtkGeoCamera>);
		VtkGeoCameraWrap();
		~VtkGeoCameraWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHeading(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLatitude(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLockHeading(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLongitude(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNodeCoverage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOriginLatitude(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOriginLongitude(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTilt(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVTKCamera(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InitializeNodeAnalysis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LockHeadingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LockHeadingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHeading(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLatitude(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLockHeading(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLongitude(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOriginLatitude(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOriginLongitude(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTilt(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
