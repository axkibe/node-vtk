/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKINFORMATIONOBJECTBASEKEYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKINFORMATIONOBJECTBASEKEYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkInformationObjectBaseKey.h>

#include "vtkInformationKeyWrap.h"

class VtkInformationObjectBaseKeyWrap : public VtkInformationKeyWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkInformationObjectBaseKeyWrap(vtkSmartPointer<vtkInformationObjectBaseKey>);
		VtkInformationObjectBaseKeyWrap();
		~VtkInformationObjectBaseKeyWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

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
