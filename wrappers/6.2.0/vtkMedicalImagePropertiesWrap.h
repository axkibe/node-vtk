/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKMEDICALIMAGEPROPERTIESWRAP_H
#define NATIVE_EXTENSION_VTK_VTKMEDICALIMAGEPROPERTIESWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkMedicalImageProperties.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkMedicalImagePropertiesWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkMedicalImagePropertiesWrap(vtkSmartPointer<vtkMedicalImageProperties>);
		VtkMedicalImagePropertiesWrap();
		~VtkMedicalImagePropertiesWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddUserDefinedValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AddWindowLevelPreset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Clear(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAcquisitionDate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAcquisitionDateDay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAcquisitionDateMonth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAcquisitionDateYear(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAcquisitionTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetConvolutionKernel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDateAsLocale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDirectionCosine(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEchoTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEchoTrainLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetExposure(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetExposureTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGantryTilt(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGantryTiltAsDouble(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImageDate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImageDateDay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImageDateMonth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImageDateYear(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImageNumber(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImageTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInstanceUIDFromSliceID(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInstitutionName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetKVP(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetManufacturer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetManufacturerModelName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetModality(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNthWindowLevelPreset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNthWindowLevelPresetComment(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfUserDefinedValues(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfWindowLevelPresets(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrientationType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPatientAge(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPatientAgeDay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPatientAgeMonth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPatientAgeWeek(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPatientAgeYear(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPatientBirthDate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPatientBirthDateDay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPatientBirthDateMonth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPatientBirthDateYear(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPatientID(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPatientName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPatientSex(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRepetitionTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSeriesDescription(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSeriesNumber(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSliceThickness(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSliceThicknessAsDouble(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStationName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStringFromOrientationType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStudyDate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStudyDescription(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStudyID(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStudyTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUserDefinedNameByIndex(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUserDefinedValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUserDefinedValueByIndex(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWindowLevelPresetIndex(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXRayTubeCurrent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasWindowLevelPreset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveAllUserDefinedValues(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveAllWindowLevelPresets(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveWindowLevelPreset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAcquisitionDate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAcquisitionTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetConvolutionKernel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDirectionCosine(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEchoTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEchoTrainLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetExposure(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetExposureTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGantryTilt(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetImageDate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetImageNumber(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetImageTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInstanceUIDFromSliceID(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInstitutionName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetKVP(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetManufacturer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetManufacturerModelName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetModality(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNthWindowLevelPresetComment(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrientationType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPatientAge(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPatientBirthDate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPatientID(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPatientName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPatientSex(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRepetitionTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSeriesDescription(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSeriesNumber(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSliceThickness(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStationName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStudyDate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStudyDescription(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStudyID(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStudyTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXRayTubeCurrent(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKMEDICALIMAGEPROPERTIESWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKMEDICALIMAGEPROPERTIESWRAP_CLASSDEF
#endif
};

#endif
