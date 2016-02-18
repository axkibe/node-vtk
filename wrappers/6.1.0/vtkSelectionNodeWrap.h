/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSELECTIONNODEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSELECTIONNODEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkSelectionNode.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkSelectionNodeWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkSelectionNodeWrap(vtkSmartPointer<vtkSelectionNode>);
		VtkSelectionNodeWrap();
		~VtkSelectionNodeWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void COMPONENT_NUMBER(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void COMPOSITE_INDEX(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CONTAINING_CELLS(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CONTENT_TYPE(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EPSILON(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EqualProperties(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FIELD_TYPE(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetContentType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFieldType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProperties(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetQueryString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectionData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectionList(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HIERARCHICAL_INDEX(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HIERARCHICAL_LEVEL(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void INDEXED_VERTICES(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void INVERSE(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PIXEL_COUNT(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PROCESS_ID(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PROP(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PROP_ID(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SOURCE(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SOURCE_ID(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetContentType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFieldType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetQueryString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectionData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectionList(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SubtractSelectionList(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UnionSelectionList(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKSELECTIONNODEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKSELECTIONNODEWRAP_CLASSDEF
#endif
};

#endif
