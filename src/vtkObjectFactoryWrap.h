/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKOBJECTFACTORYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKOBJECTFACTORYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkObjectFactory.h>

#include "vtkObjectWrap.h"

class VtkObjectFactoryWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkObjectFactoryWrap(vtkSmartPointer<vtkObjectFactory>);
		VtkObjectFactoryWrap();
		~VtkObjectFactoryWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ConstructInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CreateAllInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CreateInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Disable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassOverrideName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassOverrideWithName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDescription(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEnableFlag(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLibraryPath(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfOverrides(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOverrideDescription(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOverrideInformation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRegisteredFactories(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVTKSourceVersion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasOverride(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasOverrideAny(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReHash(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RegisterFactory(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAllEnableFlags(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEnableFlag(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UnRegisterAllFactories(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UnRegisterFactory(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
