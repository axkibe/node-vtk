/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPROGRAMMABLEFILTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPROGRAMMABLEFILTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkProgrammableFilter.h>

#include "vtkPassInputTypeAlgorithmWrap.h"

class VtkProgrammableFilterWrap : public VtkPassInputTypeAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkProgrammableFilterWrap(vtkSmartPointer<vtkProgrammableFilter>);
		VtkProgrammableFilterWrap();
		~VtkProgrammableFilterWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CopyArraysOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CopyArraysOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGraphInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPolyDataInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRectilinearGridInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStructuredGridInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStructuredPointsInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTableInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUnstructuredGridInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
