/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKOBJREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKOBJREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkOBJReader.h>

#include "vtkAbstractPolyDataReaderWrap.h"
#include "../../plus/plus.h"

class VtkOBJReaderWrap : public VtkAbstractPolyDataReaderWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkOBJReaderWrap(vtkSmartPointer<vtkOBJReader>);
		VtkOBJReaderWrap();
		~VtkOBJReaderWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKOBJREADERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKOBJREADERWRAP_CLASSDEF
#endif
};

#endif
