/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGETRANSLATEEXTENTWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGETRANSLATEEXTENTWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageTranslateExtent.h>

#include "vtkImageAlgorithmWrap.h"

class VtkImageTranslateExtentWrap : public VtkImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkImageTranslateExtentWrap(vtkSmartPointer<vtkImageTranslateExtent>);
		VtkImageTranslateExtentWrap();
		~VtkImageTranslateExtentWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTranslation(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
