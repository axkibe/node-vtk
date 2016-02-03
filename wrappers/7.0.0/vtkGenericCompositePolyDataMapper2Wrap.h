/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGENERICCOMPOSITEPOLYDATAMAPPER2WRAP_H
#define NATIVE_EXTENSION_VTK_VTKGENERICCOMPOSITEPOLYDATAMAPPER2WRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGenericCompositePolyDataMapper2.h>

#include "vtkOpenGLPolyDataMapperWrap.h"

class VtkGenericCompositePolyDataMapper2Wrap : public VtkOpenGLPolyDataMapperWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkGenericCompositePolyDataMapper2Wrap(vtkSmartPointer<vtkGenericCompositePolyDataMapper2>);
		VtkGenericCompositePolyDataMapper2Wrap();
		~VtkGenericCompositePolyDataMapper2Wrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCompositeDataDisplayAttributes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIsOpaque(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveBlockColors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveBlockOpacities(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveBlockVisibilites(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCompositeDataDisplayAttributes(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif