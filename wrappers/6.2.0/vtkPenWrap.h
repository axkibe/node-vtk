/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPENWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPENWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPen.h>

#include "vtkObjectWrap.h"

class VtkPenWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPenWrap(vtkSmartPointer<vtkPen>);
		VtkPenWrap();
		~VtkPenWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetColorF(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLineType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColorF(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLineType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOpacityF(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
