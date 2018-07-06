/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKADJACENCYMATRIXTOEDGETABLEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKADJACENCYMATRIXTOEDGETABLEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAdjacencyMatrixToEdgeTable.h>

#include "vtkTableAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkAdjacencyMatrixToEdgeTableWrap : public VtkTableAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkAdjacencyMatrixToEdgeTableWrap(vtkSmartPointer<vtkAdjacencyMatrixToEdgeTable>);
		VtkAdjacencyMatrixToEdgeTableWrap();
		~VtkAdjacencyMatrixToEdgeTableWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetMinimumThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetValueArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMinimumThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetValueArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKADJACENCYMATRIXTOEDGETABLEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKADJACENCYMATRIXTOEDGETABLEWRAP_CLASSDEF
#endif
};

#endif
