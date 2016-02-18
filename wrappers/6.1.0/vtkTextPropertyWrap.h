/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTEXTPROPERTYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTEXTPROPERTYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTextProperty.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkTextPropertyWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkTextPropertyWrap(vtkSmartPointer<vtkTextProperty>);
		VtkTextPropertyWrap();
		~VtkTextPropertyWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BoldOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BoldOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFontFamily(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFontFamilyAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFontFamilyFromString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFontFamilyMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFontFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFontSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFontSizeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFontSizeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetItalic(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetJustification(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetJustificationAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetJustificationMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetJustificationMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLineOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLineSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShadow(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShadowColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShadowOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVerticalJustification(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVerticalJustificationAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVerticalJustificationMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVerticalJustificationMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ItalicOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ItalicOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFontFamily(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFontFamilyAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFontFamilyToArial(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFontFamilyToCourier(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFontFamilyToTimes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFontFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFontSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetItalic(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetJustification(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetJustificationToCentered(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetJustificationToLeft(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetJustificationToRight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLineOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLineSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShadow(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShadowOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVerticalJustification(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVerticalJustificationToBottom(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVerticalJustificationToCentered(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVerticalJustificationToTop(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShadowOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShadowOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKTEXTPROPERTYWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKTEXTPROPERTYWRAP_CLASSDEF
#endif
};

#endif
