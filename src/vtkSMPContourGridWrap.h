/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSMPCONTOURGRIDWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSMPCONTOURGRIDWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkSMPContourGrid.h>

#include "vtkContourGridWrap.h"

class VtkSMPContourGridWrap : public VtkContourGridWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkSMPContourGridWrap(vtkSmartPointer<vtkSMPContourGrid>);
		VtkSMPContourGridWrap();
		~VtkSMPContourGridWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MergePiecesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MergePiecesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
