/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKAMRTOMULTIBLOCKFILTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKAMRTOMULTIBLOCKFILTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAMRToMultiBlockFilter.h>

#include "vtkMultiBlockDataSetAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkAMRToMultiBlockFilterWrap : public VtkMultiBlockDataSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkAMRToMultiBlockFilterWrap(vtkSmartPointer<vtkAMRToMultiBlockFilter>);
		VtkAMRToMultiBlockFilterWrap();
		~VtkAMRToMultiBlockFilterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void FillInputPortInformation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FillOutputPortInformation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetController(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetController(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKAMRTOMULTIBLOCKFILTERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKAMRTOMULTIBLOCKFILTERWRAP_CLASSDEF
#endif
};

#endif