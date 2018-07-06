/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPERIODICTABLEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPERIODICTABLEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPeriodicTable.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkPeriodicTableWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPeriodicTableWrap(vtkSmartPointer<vtkPeriodicTable>);
		VtkPeriodicTableWrap();
		~VtkPeriodicTableWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetAtomicNumber(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCovalentRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDefaultLUT(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDefaultRGBTuple(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetElementName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfElements(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSymbol(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVDWRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKPERIODICTABLEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKPERIODICTABLEWRAP_CLASSDEF
#endif
};

#endif