/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKDATAOBJECTTOTABLEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKDATAOBJECTTOTABLEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkDataObjectToTable.h>

#include "vtkTableAlgorithmWrap.h"

class VtkDataObjectToTableWrap : public VtkTableAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkDataObjectToTableWrap(vtkSmartPointer<vtkDataObjectToTable>);
		VtkDataObjectToTableWrap();
		~VtkDataObjectToTableWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFieldType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFieldTypeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFieldTypeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFieldType(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
