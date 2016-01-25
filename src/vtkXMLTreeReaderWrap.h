/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKXMLTREEREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKXMLTREEREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkXMLTreeReader.h>

#include "vtkTreeAlgorithmWrap.h"

class VtkXMLTreeReaderWrap : public VtkTreeAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkXMLTreeReaderWrap(vtkSmartPointer<vtkXMLTreeReader>);
		VtkXMLTreeReaderWrap();
		~VtkXMLTreeReaderWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GenerateEdgePedigreeIdsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateEdgePedigreeIdsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateVertexPedigreeIdsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateVertexPedigreeIdsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdgePedigreeIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVertexPedigreeIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXMLString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
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
		static void SetVertexPedigreeIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXMLString(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif