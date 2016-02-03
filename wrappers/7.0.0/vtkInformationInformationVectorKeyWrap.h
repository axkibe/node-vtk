/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKINFORMATIONINFORMATIONVECTORKEYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKINFORMATIONINFORMATIONVECTORKEYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkInformationInformationVectorKey.h>

#include "vtkInformationKeyWrap.h"

class VtkInformationInformationVectorKeyWrap : public VtkInformationKeyWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkInformationInformationVectorKeyWrap(vtkSmartPointer<vtkInformationInformationVectorKey>);
		VtkInformationInformationVectorKeyWrap();
		~VtkInformationInformationVectorKeyWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Get(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Report(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Set(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
