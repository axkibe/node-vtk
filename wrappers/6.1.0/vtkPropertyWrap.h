/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPROPERTYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPROPERTYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkProperty.h>

#include "vtkObjectWrap.h"

class VtkPropertyWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPropertyWrap(vtkSmartPointer<vtkProperty>);
		VtkPropertyWrap();
		~VtkPropertyWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddShaderVariable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BackfaceCullingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BackfaceCullingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BackfaceRender(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EdgeVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EdgeVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FrontfaceCullingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FrontfaceCullingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAmbient(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAmbientMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAmbientMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBackfaceCulling(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDiffuse(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDiffuseMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDiffuseMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdgeVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFrontfaceCulling(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInterpolation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInterpolationAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInterpolationMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInterpolationMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLighting(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLineStipplePattern(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLineStippleRepeatFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLineStippleRepeatFactorMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLineStippleRepeatFactorMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaterialName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfTextures(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOpacityMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOpacityMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRepresentationAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRepresentationMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRepresentationMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShaderDeviceAdapter2(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShading(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSpecular(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSpecularMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSpecularMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSpecularPower(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSpecularPowerMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSpecularPowerMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTexture(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LightingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LightingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PostRender(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveAllTextures(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveTexture(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Render(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAmbient(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAmbientColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBackfaceCulling(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDiffuse(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDiffuseColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEdgeColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEdgeVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFrontfaceCulling(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolationToFlat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolationToGouraud(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolationToPhong(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLighting(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLineStipplePattern(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLineStippleRepeatFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRepresentationToPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRepresentationToSurface(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRepresentationToWireframe(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShading(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSpecular(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSpecularColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSpecularPower(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTexture(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShadingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShadingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
