/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKABSTRACTPICKERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKABSTRACTPICKERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAbstractPicker.h>

#include "vtkObjectWrap.h"

class VtkAbstractPickerWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkAbstractPickerWrap(vtkSmartPointer<vtkAbstractPicker>);
		VtkAbstractPickerWrap();
		~VtkAbstractPickerWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddPickList(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeletePickList(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPickFromList(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPickList(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPickPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectionPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InitializePickList(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Pick(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PickFromListOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PickFromListOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPickFromList(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
