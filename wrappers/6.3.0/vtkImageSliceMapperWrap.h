/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGESLICEMAPPERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGESLICEMAPPERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageSliceMapper.h>

#include "vtkImageMapper3DWrap.h"
#include "../../plus/plus.h"

class VtkImageSliceMapperWrap : public VtkImageMapper3DWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageSliceMapperWrap(vtkSmartPointer<vtkImageSliceMapper>);
		VtkImageSliceMapperWrap();
		~VtkImageSliceMapperWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CroppingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CroppingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCropping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCroppingRegion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrientationMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrientationMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSliceNumber(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSliceNumberMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSliceNumberMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSlicePlaneInDataCoords(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Render(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCropping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCroppingRegion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrientationToX(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrientationToY(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrientationToZ(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSliceNumber(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Update(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKIMAGESLICEMAPPERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKIMAGESLICEMAPPERWRAP_CLASSDEF
#endif
};

#endif
