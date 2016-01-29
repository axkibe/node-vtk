/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKABSTRACTELECTRONICDATAWRAP_H
#define NATIVE_EXTENSION_VTK_VTKABSTRACTELECTRONICDATAWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAbstractElectronicData.h>

#include "vtkDataObjectWrap.h"

class VtkAbstractElectronicDataWrap : public VtkDataObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkAbstractElectronicDataWrap(vtkSmartPointer<vtkAbstractElectronicData>);
		VtkAbstractElectronicDataWrap();
		~VtkAbstractElectronicDataWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHOMO(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLUMO(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPadding(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
