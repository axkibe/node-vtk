/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKBSPCUTSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKBSPCUTSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkBSPCuts.h>

#include "vtkDataObjectWrap.h"
#include "../../plus/plus.h"

class VtkBSPCutsWrap : public VtkDataObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkBSPCutsWrap(vtkSmartPointer<vtkBSPCuts>);
		VtkBSPCutsWrap();
		~VtkBSPCutsWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CreateCuts(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Equals(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetKdNodeTree(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfCuts(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PrintArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PrintTree(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKBSPCUTSWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKBSPCUTSWRAP_CLASSDEF
#endif
};

#endif
