/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKBLANKSTRUCTUREDGRIDWRAP_H
#define NATIVE_EXTENSION_VTK_VTKBLANKSTRUCTUREDGRIDWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkBlankStructuredGrid.h>

#include "vtkStructuredGridAlgorithmWrap.h"

class VtkBlankStructuredGridWrap : public VtkStructuredGridAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkBlankStructuredGridWrap(vtkSmartPointer<vtkBlankStructuredGrid>);
		VtkBlankStructuredGridWrap();
		~VtkBlankStructuredGridWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetArrayId(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComponentMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComponentMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaxBlankingValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinBlankingValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetArrayId(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaxBlankingValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMinBlankingValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
