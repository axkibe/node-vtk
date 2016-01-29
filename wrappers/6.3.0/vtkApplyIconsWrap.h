/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKAPPLYICONSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKAPPLYICONSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkApplyIcons.h>

#include "vtkPassInputTypeAlgorithmWrap.h"

class VtkApplyIconsWrap : public VtkPassInputTypeAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkApplyIconsWrap(vtkSmartPointer<vtkApplyIcons>);
		VtkApplyIconsWrap();
		~VtkApplyIconsWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ClearAllIconTypes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAttributeType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDefaultIcon(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIconOutputArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectedIcon(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectionMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAttributeType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDefaultIcon(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIconOutputArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIconType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectedIcon(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectionMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectionModeToAnnotationIcon(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectionModeToIgnoreSelection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectionModeToSelectedIcon(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectionModeToSelectedOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseLookupTableOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseLookupTableOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
