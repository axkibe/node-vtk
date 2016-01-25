/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKRIBPROPERTYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKRIBPROPERTYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkRIBProperty.h>

#include "vtkPropertyWrap.h"

class VtkRIBPropertyWrap : public VtkPropertyWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkRIBPropertyWrap(vtkSmartPointer<vtkRIBProperty>);
		VtkRIBPropertyWrap();
		~VtkRIBPropertyWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddParameter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AddVariable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDeclarations(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDisplacementShader(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetParameters(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSurfaceShader(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDisplacementShader(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetParameter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSurfaceShader(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVariable(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
