/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKFRUSTUMSOURCEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKFRUSTUMSOURCEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkFrustumSource.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkFrustumSourceWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkFrustumSourceWrap(vtkSmartPointer<vtkFrustumSource>);
		VtkFrustumSourceWrap();
		~VtkFrustumSourceWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLinesLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLinesLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShowLinesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShowLinesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
