/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKINTERACTOROBSERVERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKINTERACTOROBSERVERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkInteractorObserver.h>

#include "vtkObjectWrap.h"

class VtkInteractorObserverWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkInteractorObserverWrap(vtkSmartPointer<vtkInteractorObserver>);
		VtkInteractorObserverWrap();
		~VtkInteractorObserverWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void EnabledOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EnabledOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCurrentRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDefaultRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInteractor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetKeyPressActivation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetKeyPressActivationValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPickingManaged(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GrabFocus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void KeyPressActivationOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void KeyPressActivationOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Off(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void On(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OnChar(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PickingManagedOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PickingManagedOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseFocus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCurrentRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDefaultRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInteractor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetKeyPressActivation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetKeyPressActivationValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPickingManaged(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
