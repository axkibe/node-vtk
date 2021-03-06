/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKOVERLAPPINGAMRLEVELIDSCALARSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKOVERLAPPINGAMRLEVELIDSCALARSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkOverlappingAMRLevelIdScalars.h>

#include "vtkOverlappingAMRAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkOverlappingAMRLevelIdScalarsWrap : public VtkOverlappingAMRAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkOverlappingAMRLevelIdScalarsWrap(vtkSmartPointer<vtkOverlappingAMRLevelIdScalars>);
		VtkOverlappingAMRLevelIdScalarsWrap();
		~VtkOverlappingAMRLevelIdScalarsWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKOVERLAPPINGAMRLEVELIDSCALARSWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKOVERLAPPINGAMRLEVELIDSCALARSWRAP_CLASSDEF
#endif
};

#endif
