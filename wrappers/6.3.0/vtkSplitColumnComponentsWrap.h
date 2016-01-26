/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSPLITCOLUMNCOMPONENTSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSPLITCOLUMNCOMPONENTSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkSplitColumnComponents.h>

#include "vtkTableAlgorithmWrap.h"

class VtkSplitColumnComponentsWrap : public VtkTableAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkSplitColumnComponentsWrap(vtkSmartPointer<vtkSplitColumnComponents>);
		VtkSplitColumnComponentsWrap();
		~VtkSplitColumnComponentsWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNamingMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNamingModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNamingModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNamingMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNamingModeToNamesWithParens(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNamingModeToNamesWithUnderscores(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNamingModeToNumberWithParens(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNamingModeToNumberWithUnderscores(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
