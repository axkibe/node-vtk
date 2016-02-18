/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSMPCONTOURGRIDWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSMPCONTOURGRIDWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkSMPContourGrid.h>

#include "vtkContourGridWrap.h"
#include "../../plus/plus.h"

class VtkSMPContourGridWrap : public VtkContourGridWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkSMPContourGridWrap(vtkSmartPointer<vtkSMPContourGrid>);
		VtkSMPContourGridWrap();
		~VtkSMPContourGridWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMergePieces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MergePiecesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MergePiecesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMergePieces(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKSMPCONTOURGRIDWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKSMPCONTOURGRIDWRAP_CLASSDEF
#endif
};

#endif
