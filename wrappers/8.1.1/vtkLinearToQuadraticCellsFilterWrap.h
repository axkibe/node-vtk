/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKLINEARTOQUADRATICCELLSFILTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKLINEARTOQUADRATICCELLSFILTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkLinearToQuadraticCellsFilter.h>

#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkLinearToQuadraticCellsFilterWrap : public VtkUnstructuredGridAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkLinearToQuadraticCellsFilterWrap(vtkSmartPointer<vtkLinearToQuadraticCellsFilter>);
		VtkLinearToQuadraticCellsFilterWrap();
		~VtkLinearToQuadraticCellsFilterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CreateDefaultLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKLINEARTOQUADRATICCELLSFILTERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKLINEARTOQUADRATICCELLSFILTERWRAP_CLASSDEF
#endif
};

#endif
