/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKVRMLIMPORTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKVRMLIMPORTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkVRMLImporter.h>

#include "vtkImporterWrap.h"
#include "../../plus/plus.h"

class VtkVRMLImporterWrap : public VtkImporterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkVRMLImporterWrap(vtkSmartPointer<vtkVRMLImporter>);
		VtkVRMLImporterWrap();
		~VtkVRMLImporterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVRMLDEFObject(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void enterField(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void enterNode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void exitField(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void exitNode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void useNode(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKVRMLIMPORTERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKVRMLIMPORTERWRAP_CLASSDEF
#endif
};

#endif
