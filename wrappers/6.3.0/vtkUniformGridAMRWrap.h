/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKUNIFORMGRIDAMRWRAP_H
#define NATIVE_EXTENSION_VTK_VTKUNIFORMGRIDAMRWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkUniformGridAMR.h>

#include "vtkCompositeDataSetWrap.h"

class VtkUniformGridAMRWrap : public VtkCompositeDataSetWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkUniformGridAMRWrap(vtkSmartPointer<vtkUniformGridAMR>);
		VtkUniformGridAMRWrap();
		~VtkUniformGridAMRWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CopyStructure(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataObjectType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataSet(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGridDescription(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMax(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewIterator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataSet(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGridDescription(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
