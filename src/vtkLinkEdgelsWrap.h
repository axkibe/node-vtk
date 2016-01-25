/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKLINKEDGELSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKLINKEDGELSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkLinkEdgels.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkLinkEdgelsWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkLinkEdgelsWrap(vtkSmartPointer<vtkLinkEdgels>);
		VtkLinkEdgelsWrap();
		~VtkLinkEdgelsWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGradientThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLinkThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPhiThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGradientThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLinkThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPhiThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
