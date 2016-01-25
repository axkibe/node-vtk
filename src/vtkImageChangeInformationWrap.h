/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGECHANGEINFORMATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGECHANGEINFORMATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageChangeInformation.h>

#include "vtkImageAlgorithmWrap.h"

class VtkImageChangeInformationWrap : public VtkImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkImageChangeInformationWrap(vtkSmartPointer<vtkImageChangeInformation>);
		VtkImageChangeInformationWrap();
		~VtkImageChangeInformationWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CenterImageOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CenterImageOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCenterImage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInformationInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCenterImage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetExtentTranslation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInformationInputData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOriginScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOriginTranslation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputExtentStart(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSpacingScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
