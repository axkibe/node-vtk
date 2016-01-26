/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPICKINGMANAGERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPICKINGMANAGERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPickingManager.h>

#include "vtkObjectWrap.h"

class VtkPickingManagerWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPickingManagerWrap(vtkSmartPointer<vtkPickingManager>);
		VtkPickingManagerWrap();
		~VtkPickingManagerWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddPicker(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EnabledOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EnabledOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAssemblyPath(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInteractor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfObjectsLinked(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPickers(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveObject(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemovePicker(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInteractor(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
