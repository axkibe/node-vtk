/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCONNECTIVITYFILTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCONNECTIVITYFILTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkConnectivityFilter.h>

#include "vtkUnstructuredGridAlgorithmWrap.h"

class VtkConnectivityFilterWrap : public VtkUnstructuredGridAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkConnectivityFilterWrap(vtkSmartPointer<vtkConnectivityFilter>);
		VtkConnectivityFilterWrap();
		~VtkConnectivityFilterWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddSpecifiedRegion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ColorRegionsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ColorRegionsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeleteSpecifiedRegion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetColorRegions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetExtractionMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetExtractionModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetExtractionModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetExtractionModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfExtractedRegions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarConnectivity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InitializeSeedList(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InitializeSpecifiedRegionList(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ScalarConnectivityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ScalarConnectivityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetClosestPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColorRegions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetExtractionMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetExtractionModeToAllRegions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetExtractionModeToCellSeededRegions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetExtractionModeToClosestPointRegion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetExtractionModeToLargestRegion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetExtractionModeToPointSeededRegions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetExtractionModeToSpecifiedRegions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarConnectivity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
