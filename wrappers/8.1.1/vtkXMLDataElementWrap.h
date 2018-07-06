/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKXMLDATAELEMENTWRAP_H
#define NATIVE_EXTENSION_VTK_VTKXMLDATAELEMENTWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkXMLDataElement.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkXMLDataElementWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkXMLDataElementWrap(vtkSmartPointer<vtkXMLDataElement>);
		VtkXMLDataElementWrap();
		~VtkXMLDataElementWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddNestedElement(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FindNestedElement(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FindNestedElementWithName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FindNestedElementWithNameAndAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FindNestedElementWithNameAndId(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAttributeEncoding(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAttributeEncodingMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAttributeEncodingMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAttributeName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAttributeValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCharacterData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCharacterDataWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetId(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNestedElement(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfAttributes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfNestedElements(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetParent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRoot(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsEqualTo(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LookupElement(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LookupElementWithName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PrintXML(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveAllAttributes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveAllNestedElements(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveNestedElement(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAttributeEncoding(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCharacterData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCharacterDataWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDoubleAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFloatAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetId(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIntAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetParent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUnsignedLongAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKXMLDATAELEMENTWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKXMLDATAELEMENTWRAP_CLASSDEF
#endif
};

#endif
