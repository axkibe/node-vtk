/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKAMRCUTPLANEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKAMRCUTPLANEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAMRCutPlane.h>

#include "vtkMultiBlockDataSetAlgorithmWrap.h"

class VtkAMRCutPlaneWrap : public VtkMultiBlockDataSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkAMRCutPlaneWrap(vtkSmartPointer<vtkAMRCutPlane>);
		VtkAMRCutPlaneWrap();
		~VtkAMRCutPlaneWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void FillInputPortInformation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FillOutputPortInformation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetController(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLevelOfResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseNativeCutter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetController(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLevelOfResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNormal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseNativeCutter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseNativeCutterOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseNativeCutterOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
