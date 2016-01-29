/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKDATAREPRESENTATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKDATAREPRESENTATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkDataRepresentation.h>

#include "vtkPassInputTypeAlgorithmWrap.h"

class VtkDataRepresentationWrap : public VtkPassInputTypeAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkDataRepresentationWrap(vtkSmartPointer<vtkDataRepresentation>);
		VtkDataRepresentationWrap();
		~VtkDataRepresentationWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void Annotate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ApplyViewTheme(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ConvertSelection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAnnotationLink(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInputConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInternalAnnotationOutputPort(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInternalOutputPort(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInternalSelectionOutputPort(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectionArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectionArrayNames(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectionType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Select(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SelectableOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SelectableOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAnnotationLink(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectionArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectionArrayNames(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectionType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdateAnnotations(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdateSelection(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
