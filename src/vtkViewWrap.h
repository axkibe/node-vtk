/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKVIEWWRAP_H
#define NATIVE_EXTENSION_VTK_VTKVIEWWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkView.h>

#include "vtkObjectWrap.h"

class VtkViewWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkViewWrap(vtkSmartPointer<vtkView>);
		VtkViewWrap();
		~VtkViewWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AddRepresentationFromInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AddRepresentationFromInputConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ApplyViewTheme(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfRepresentations(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetObserver(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RegisterProgress(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveAllRepresentations(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRepresentationFromInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRepresentationFromInputConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UnRegisterProgress(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Update(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
