/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKDATAOBJECTTREEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKDATAOBJECTTREEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkDataObjectTree.h>

#include "vtkCompositeDataSetWrap.h"

class VtkDataObjectTreeWrap : public VtkCompositeDataSetWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkDataObjectTreeWrap(vtkSmartPointer<vtkDataObjectTree>);
		VtkDataObjectTreeWrap();
		~VtkDataObjectTreeWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CopyStructure(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataSet(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMetaData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasMetaData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewIterator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewTreeIterator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataSet(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataSetFrom(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
