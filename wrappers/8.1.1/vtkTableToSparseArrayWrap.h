/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTABLETOSPARSEARRAYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTABLETOSPARSEARRAYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTableToSparseArray.h>

#include "vtkArrayDataAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkTableToSparseArrayWrap : public VtkArrayDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkTableToSparseArrayWrap(vtkSmartPointer<vtkTableToSparseArray>);
		VtkTableToSparseArrayWrap();
		~VtkTableToSparseArrayWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddCoordinateColumn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ClearCoordinateColumns(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ClearOutputExtents(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetValueColumn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetValueColumn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKTABLETOSPARSEARRAYWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKTABLETOSPARSEARRAYWRAP_CLASSDEF
#endif
};

#endif
