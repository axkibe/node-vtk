/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGECONSTANTPADWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGECONSTANTPADWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageConstantPad.h>

#include "vtkImagePadFilterWrap.h"

class VtkImageConstantPadWrap : public VtkImagePadFilterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkImageConstantPadWrap(vtkSmartPointer<vtkImageConstantPad>);
		VtkImageConstantPadWrap();
		~VtkImageConstantPadWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetConstant(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetConstant(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
