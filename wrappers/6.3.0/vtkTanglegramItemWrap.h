/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTANGLEGRAMITEMWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTANGLEGRAMITEMWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTanglegramItem.h>

#include "vtkContextItemWrap.h"

class VtkTanglegramItemWrap : public VtkContextItemWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkTanglegramItemWrap(vtkSmartPointer<vtkTanglegramItem>);
		VtkTanglegramItemWrap();
		~VtkTanglegramItemWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelSizeDifference(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinimumVisibleFontSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTree1Label(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTree2Label(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelSizeDifference(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMinimumVisibleFontSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTree1(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTree1Label(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTree2(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTree2Label(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif