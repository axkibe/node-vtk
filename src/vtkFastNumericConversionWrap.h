/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKFASTNUMERICCONVERSIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKFASTNUMERICCONVERSIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkFastNumericConversion.h>

#include "vtkObjectWrap.h"

class VtkFastNumericConversionWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkFastNumericConversionWrap(vtkSmartPointer<vtkFastNumericConversion>);
		VtkFastNumericConversionWrap();
		~VtkFastNumericConversionWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RoundingTieBreaker(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetReservedFracBits(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TestConvertFixedPointFracPart(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TestConvertFixedPointIntPart(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TestQuickFloor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TestRound(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TestSafeFloor(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
