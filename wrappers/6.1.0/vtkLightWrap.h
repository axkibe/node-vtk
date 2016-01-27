/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKLIGHTWRAP_H
#define NATIVE_EXTENSION_VTK_VTKLIGHTWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkLight.h>

#include "vtkObjectWrap.h"

class VtkLightWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkLightWrap(vtkSmartPointer<vtkLight>);
		VtkLightWrap();
		~VtkLightWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetConeAngle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetExponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetExponentMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetExponentMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIntensity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLightType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPositional(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSwitch(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTransformMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LightTypeIsCameraLight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LightTypeIsHeadlight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LightTypeIsSceneLight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PositionalOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PositionalOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Render(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAmbientColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAttenuationValues(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetConeAngle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDiffuseColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDirectionAngle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetExponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFocalPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIntensity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLightType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLightTypeToCameraLight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLightTypeToHeadlight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLightTypeToSceneLight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPositional(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSpecularColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSwitch(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTransformMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowClone(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SwitchOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SwitchOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif