/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKREARRANGEFIELDSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKREARRANGEFIELDSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkRearrangeFields.h>

#include "vtkDataSetAlgorithmWrap.h"

class VtkRearrangeFieldsWrap : public VtkDataSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkRearrangeFieldsWrap(vtkSmartPointer<vtkRearrangeFields>);
		VtkRearrangeFieldsWrap();
		~VtkRearrangeFieldsWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddOperation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveAllOperations(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveOperation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
