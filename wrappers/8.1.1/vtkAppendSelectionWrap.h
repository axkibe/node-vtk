/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKAPPENDSELECTIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKAPPENDSELECTIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAppendSelection.h>

#include "vtkSelectionAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkAppendSelectionWrap : public VtkSelectionAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkAppendSelectionWrap(vtkSmartPointer<vtkAppendSelection>);
		VtkAppendSelectionWrap();
		~VtkAppendSelectionWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddInputData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AppendByUnionOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AppendByUnionOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAppendByUnion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUserManagedInputs(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveInputData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAppendByUnion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputConnectionByNumber(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfInputs(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUserManagedInputs(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UserManagedInputsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UserManagedInputsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKAPPENDSELECTIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKAPPENDSELECTIONWRAP_CLASSDEF
#endif
};

#endif
