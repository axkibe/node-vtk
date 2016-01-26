/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKINTERACTORSTYLEUNICAMWRAP_H
#define NATIVE_EXTENSION_VTK_VTKINTERACTORSTYLEUNICAMWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkInteractorStyleUnicam.h>

#include "vtkInteractorStyleWrap.h"

class VtkInteractorStyleUnicamWrap : public VtkInteractorStyleWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkInteractorStyleUnicamWrap(vtkSmartPointer<vtkInteractorStyleUnicam>);
		VtkInteractorStyleUnicamWrap();
		~VtkInteractorStyleUnicamWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnLeftButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnLeftButtonMove(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnLeftButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnMouseMove(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnTimer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWorldUpVector(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
