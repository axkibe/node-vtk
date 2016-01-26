/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKABSTRACTMAPPERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKABSTRACTMAPPERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAbstractMapper.h>

#include "vtkAlgorithmWrap.h"

class VtkAbstractMapperWrap : public VtkAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkAbstractMapperWrap(vtkSmartPointer<vtkAbstractMapper>);
		VtkAbstractMapperWrap();
		~VtkAbstractMapperWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddClippingPlane(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClippingPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTimeToDraw(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveAllClippingPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveClippingPlane(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetClippingPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
