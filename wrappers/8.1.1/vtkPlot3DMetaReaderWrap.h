/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPLOT3DMETAREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPLOT3DMETAREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPlot3DMetaReader.h>

#include "vtkMultiBlockDataSetAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkPlot3DMetaReaderWrap : public VtkMultiBlockDataSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPlot3DMetaReaderWrap(vtkSmartPointer<vtkPlot3DMetaReader>);
		VtkPlot3DMetaReaderWrap();
		~VtkPlot3DMetaReaderWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKPLOT3DMETAREADERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKPLOT3DMETAREADERWRAP_CLASSDEF
#endif
};

#endif
