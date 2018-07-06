/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKASSEMBLYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKASSEMBLYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAssembly.h>

#include "vtkProp3DWrap.h"
#include "../../plus/plus.h"

class VtkAssemblyWrap : public VtkProp3DWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkAssemblyWrap(vtkSmartPointer<vtkAssembly>);
		VtkAssemblyWrap();
		~VtkAssemblyWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddPart(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BuildPaths(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetActors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNextPath(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPaths(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetParts(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVolumes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InitPathTraversal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemovePart(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderVolumetricGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKASSEMBLYWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKASSEMBLYWRAP_CLASSDEF
#endif
};

#endif
