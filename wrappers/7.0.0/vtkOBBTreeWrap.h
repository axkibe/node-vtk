/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKOBBTREEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKOBBTREEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkOBBTree.h>

#include "vtkAbstractCellLocatorWrap.h"
#include "../../plus/plus.h"

class VtkOBBTreeWrap : public VtkAbstractCellLocatorWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkOBBTreeWrap(vtkSmartPointer<vtkOBBTree>);
		VtkOBBTreeWrap();
		~VtkOBBTreeWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BuildLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeOBB(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FreeSearchStructure(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InsideOrOutside(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IntersectWithLine(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKOBBTREEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKOBBTREEWRAP_CLASSDEF
#endif
};

#endif
