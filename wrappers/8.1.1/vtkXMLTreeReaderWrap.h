/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKXMLTREEREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKXMLTREEREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkXMLTreeReader.h>

#include "vtkTreeAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkXMLTreeReaderWrap : public VtkTreeAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkXMLTreeReaderWrap(vtkSmartPointer<vtkXMLTreeReader>);
		VtkXMLTreeReaderWrap();
		~VtkXMLTreeReaderWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GenerateEdgePedigreeIdsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateEdgePedigreeIdsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateVertexPedigreeIdsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateVertexPedigreeIdsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdgePedigreeIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGenerateEdgePedigreeIds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGenerateVertexPedigreeIds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaskArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetReadCharData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetReadTagName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVertexPedigreeIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXMLString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MaskArraysOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MaskArraysOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadCharDataOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadCharDataOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadTagNameOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReadTagNameOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEdgePedigreeIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGenerateEdgePedigreeIds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGenerateVertexPedigreeIds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaskArrays(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetReadCharData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetReadTagName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVertexPedigreeIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXMLString(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKXMLTREEREADERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKXMLTREEREADERWRAP_CLASSDEF
#endif
};

#endif
