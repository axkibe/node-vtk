/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTYPEUINT16ARRAYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTYPEUINT16ARRAYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTypeUInt16Array.h>

#include "vtkUnsignedShortArrayWrap.h"

class VtkTypeUInt16ArrayWrap : public VtkUnsignedShortArrayWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkTypeUInt16ArrayWrap(vtkSmartPointer<vtkTypeUInt16Array>);
		VtkTypeUInt16ArrayWrap();
		~VtkTypeUInt16ArrayWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
