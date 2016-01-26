/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKLOCATORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKLOCATORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkLocator.h>

#include "vtkObjectWrap.h"

class VtkLocatorWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkLocatorWrap(vtkSmartPointer<vtkLocator>);
		VtkLocatorWrap();
		~VtkLocatorWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AutomaticOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AutomaticOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BuildLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FreeSearchStructure(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAutomatic(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataSet(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaxLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaxLevelMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaxLevelMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAutomatic(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataSet(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaxLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Update(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
