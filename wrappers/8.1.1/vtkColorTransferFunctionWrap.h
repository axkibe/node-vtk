/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCOLORTRANSFERFUNCTIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCOLORTRANSFERFUNCTIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkColorTransferFunction.h>

#include "vtkScalarsToColorsWrap.h"
#include "../../plus/plus.h"

class VtkColorTransferFunctionWrap : public VtkScalarsToColorsWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkColorTransferFunctionWrap(vtkSmartPointer<vtkColorTransferFunction>);
		VtkColorTransferFunctionWrap();
		~VtkColorTransferFunctionWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddHSVPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AddHSVSegment(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AddRGBPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AddRGBSegment(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AdjustRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AllowDuplicateScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AllowDuplicateScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ClampingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ClampingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAboveRangeColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAllowDuplicateScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBelowRangeColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBlueValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClamping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClampingMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClampingMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetColorSpace(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetColorSpaceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetColorSpaceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGreenValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHSVWrap(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNanColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNodeValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRedValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseAboveRangeColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseBelowRangeColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HSVWrapOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HSVWrapOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveAllPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemovePoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAboveRangeColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAllowDuplicateScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBelowRangeColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetClamping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColorSpace(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColorSpaceToDiverging(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColorSpaceToHSV(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColorSpaceToLab(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColorSpaceToLabCIEDE2000(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColorSpaceToRGB(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHSVWrap(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNanColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNodeValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScaleToLinear(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScaleToLog10(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseAboveRangeColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseBelowRangeColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseAboveRangeColorOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseAboveRangeColorOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseBelowRangeColorOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseBelowRangeColorOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCOLORTRANSFERFUNCTIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCOLORTRANSFERFUNCTIONWRAP_CLASSDEF
#endif
};

#endif
