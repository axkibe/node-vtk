/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGENERICATTRIBUTECOLLECTIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGENERICATTRIBUTECOLLECTIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGenericAttributeCollection.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkGenericAttributeCollectionWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkGenericAttributeCollectionWrap(vtkSmartPointer<vtkGenericAttributeCollection>);
		VtkGenericAttributeCollectionWrap();
		~VtkGenericAttributeCollectionWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FindAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActiveAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActiveComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActualMemorySize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAttributeIndex(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaxNumberOfComponents(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfAttributes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfAttributesToInterpolate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfComponents(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPointCenteredComponents(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InsertAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InsertNextAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsEmpty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Reset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetActiveAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAttributesToInterpolateToAll(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKGENERICATTRIBUTECOLLECTIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKGENERICATTRIBUTECOLLECTIONWRAP_CLASSDEF
#endif
};

#endif
