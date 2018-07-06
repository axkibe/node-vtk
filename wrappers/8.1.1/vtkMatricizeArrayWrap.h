/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKMATRICIZEARRAYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKMATRICIZEARRAYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkMatricizeArray.h>

#include "vtkArrayDataAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkMatricizeArrayWrap : public VtkArrayDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkMatricizeArrayWrap(vtkSmartPointer<vtkMatricizeArray>);
		VtkMatricizeArrayWrap();
		~VtkMatricizeArrayWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKMATRICIZEARRAYWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKMATRICIZEARRAYWRAP_CLASSDEF
#endif
};

#endif
