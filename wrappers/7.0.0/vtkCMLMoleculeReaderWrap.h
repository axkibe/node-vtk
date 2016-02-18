/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCMLMOLECULEREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCMLMOLECULEREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCMLMoleculeReader.h>

#include "vtkMoleculeAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkCMLMoleculeReaderWrap : public VtkMoleculeAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCMLMoleculeReaderWrap(vtkSmartPointer<vtkCMLMoleculeReader>);
		VtkCMLMoleculeReaderWrap();
		~VtkCMLMoleculeReaderWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCMLMOLECULEREADERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCMLMOLECULEREADERWRAP_CLASSDEF
#endif
};

#endif
