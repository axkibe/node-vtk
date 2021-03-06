/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKLOOKUPTABLEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKLOOKUPTABLEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkLookupTable.h>

#include "vtkScalarsToColorsWrap.h"
#include "../../plus/plus.h"

class VtkLookupTableWrap : public VtkScalarsToColorsWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkLookupTableWrap(vtkSmartPointer<vtkLookupTable>);
		VtkLookupTableWrap();
		~VtkLookupTableWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void Allocate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ApplyLogScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Build(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BuildSpecialColors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ForceBuild(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAboveRangeColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAlphaRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBelowRangeColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetColorAsUnsignedChars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHueRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLogRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNanColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRamp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSaturationRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTableRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseAboveRangeColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseBelowRangeColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetValueRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsOpaque(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAboveRangeColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAlphaRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBelowRangeColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHueRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNanColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRamp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRampToLinear(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRampToSCurve(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRampToSQRT(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSaturationRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScaleToLinear(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScaleToLog10(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTableRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseAboveRangeColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseBelowRangeColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetValueRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseAboveRangeColorOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseAboveRangeColorOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseBelowRangeColorOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseBelowRangeColorOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UsingLogScale(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKLOOKUPTABLEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKLOOKUPTABLEWRAP_CLASSDEF
#endif
};

#endif
