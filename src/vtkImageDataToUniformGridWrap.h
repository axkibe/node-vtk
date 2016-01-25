/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGEDATATOUNIFORMGRIDWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGEDATATOUNIFORMGRIDWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageDataToUniformGrid.h>

#include "vtkDataObjectAlgorithmWrap.h"

class VtkImageDataToUniformGridWrap : public VtkDataObjectAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkImageDataToUniformGridWrap(vtkSmartPointer<vtkImageDataToUniformGrid>);
		VtkImageDataToUniformGridWrap();
		~VtkImageDataToUniformGridWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetReverse(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetReverseMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetReverseMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReverseOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReverseOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetReverse(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif