/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKHYPEROCTREECUTTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKHYPEROCTREECUTTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkHyperOctreeCutter.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkHyperOctreeCutterWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkHyperOctreeCutterWrap(vtkSmartPointer<vtkHyperOctreeCutter>);
		VtkHyperOctreeCutterWrap();
		~VtkHyperOctreeCutterWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CreateDefaultLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateCutScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateCutScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateValues(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCutFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGenerateCutScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfContours(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSortBy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSortByAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSortByMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSortByMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCutFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGenerateCutScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfContours(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSortBy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSortByToSortByCell(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSortByToSortByValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif