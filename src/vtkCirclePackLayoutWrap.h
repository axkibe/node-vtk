/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCIRCLEPACKLAYOUTWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCIRCLEPACKLAYOUTWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCirclePackLayout.h>

#include "vtkTreeAlgorithmWrap.h"

class VtkCirclePackLayoutWrap : public VtkTreeAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCirclePackLayoutWrap(vtkSmartPointer<vtkCirclePackLayout>);
		VtkCirclePackLayoutWrap();
		~VtkCirclePackLayoutWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetCirclesFieldName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLayoutStrategy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCirclesFieldName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLayoutStrategy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSizeArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
