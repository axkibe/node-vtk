/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKANNOTATIONLAYERSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKANNOTATIONLAYERSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAnnotationLayers.h>

#include "vtkDataObjectWrap.h"

class VtkAnnotationLayersWrap : public VtkDataObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkAnnotationLayersWrap(vtkSmartPointer<vtkAnnotationLayers>);
		VtkAnnotationLayersWrap();
		~VtkAnnotationLayersWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddAnnotation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCurrentAnnotation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCurrentSelection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveAnnotation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCurrentAnnotation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCurrentSelection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
