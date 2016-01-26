/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGENERICATTRIBUTEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGENERICATTRIBUTEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGenericAttribute.h>

#include "vtkObjectWrap.h"

class VtkGenericAttributeWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkGenericAttributeWrap(vtkSmartPointer<vtkGenericAttribute>);
		VtkGenericAttributeWrap();
		~VtkGenericAttributeWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCentering(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComponentType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaxNorm(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfComponents(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
