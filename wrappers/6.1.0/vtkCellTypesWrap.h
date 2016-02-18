/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCELLTYPESWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCELLTYPESWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCellTypes.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkCellTypesWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCellTypesWrap(vtkSmartPointer<vtkCellTypes>);
		VtkCellTypesWrap();
		~VtkCellTypesWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void Allocate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellLocation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassNameFromTypeId(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfTypes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTypeIdFromClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InsertCell(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InsertNextCell(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InsertNextType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsLinear(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Reset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCellTypes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Squeeze(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCELLTYPESWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCELLTYPESWRAP_CLASSDEF
#endif
};

#endif
