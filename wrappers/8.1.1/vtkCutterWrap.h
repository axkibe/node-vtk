/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCUTTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCUTTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCutter.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkCutterWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCutterWrap(vtkSmartPointer<vtkCutter>);
		VtkCutterWrap();
		~VtkCutterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CreateDefaultLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateCutScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateCutScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateTrianglesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateTrianglesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateValues(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCutFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGenerateCutScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGenerateTriangles(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfContours(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputPointsPrecisionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputPointsPrecisionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSortBy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSortByAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSortByMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSortByMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCutFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGenerateCutScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGenerateTriangles(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfContours(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSortBy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSortByToSortByCell(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSortByToSortByValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetValue(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCUTTERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCUTTERWRAP_CLASSDEF
#endif
};

#endif
