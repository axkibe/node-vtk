/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKRECTILINEARGRIDTOTETRAHEDRAWRAP_H
#define NATIVE_EXTENSION_VTK_VTKRECTILINEARGRIDTOTETRAHEDRAWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkRectilinearGridToTetrahedra.h>

#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkRectilinearGridToTetrahedraWrap : public VtkUnstructuredGridAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkRectilinearGridToTetrahedraWrap(vtkSmartPointer<vtkRectilinearGridToTetrahedra>);
		VtkRectilinearGridToTetrahedraWrap();
		~VtkRectilinearGridToTetrahedraWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetRememberVoxelId(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTetraPerCell(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RememberVoxelIdOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RememberVoxelIdOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRememberVoxelId(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTetraPerCell(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTetraPerCellTo12(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTetraPerCellTo5(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTetraPerCellTo5And12(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTetraPerCellTo6(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKRECTILINEARGRIDTOTETRAHEDRAWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKRECTILINEARGRIDTOTETRAHEDRAWRAP_CLASSDEF
#endif
};

#endif
