/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKMATHTEXTUTILITIESWRAP_H
#define NATIVE_EXTENSION_VTK_VTKMATHTEXTUTILITIESWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkMathTextUtilities.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkMathTextUtilitiesWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkMathTextUtilitiesWrap(vtkSmartPointer<vtkMathTextUtilities>);
		VtkMathTextUtilitiesWrap();
		~VtkMathTextUtilitiesWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetConstrainedFontSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsAvailable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKMATHTEXTUTILITIESWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKMATHTEXTUTILITIESWRAP_CLASSDEF
#endif
};

#endif
