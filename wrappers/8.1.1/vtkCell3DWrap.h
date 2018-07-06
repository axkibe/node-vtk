/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCELL3DWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCELL3DWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCell3D.h>

#include "vtkCellWrap.h"
#include "../../plus/plus.h"

class VtkCell3DWrap : public VtkCellWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCell3DWrap(vtkSmartPointer<vtkCell3D>);
		VtkCell3DWrap();
		~VtkCell3DWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetCellDimension(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMergeTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMergeToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMergeToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMergeTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCELL3DWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCELL3DWRAP_CLASSDEF
#endif
};

#endif