/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCELLARRAYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCELLARRAYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCellArray.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkCellArrayWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCellArrayWrap(vtkSmartPointer<vtkCellArray>);
		VtkCellArrayWrap();
		~VtkCellArrayWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActualMemorySize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaxCellSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNextCell(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InitTraversal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Reset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Squeeze(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdateCellCount(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCELLARRAYWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCELLARRAYWRAP_CLASSDEF
#endif
};

#endif
