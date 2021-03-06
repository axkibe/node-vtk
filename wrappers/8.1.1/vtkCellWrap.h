/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCELLWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCELLWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCell.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkCellWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCellWrap(vtkSmartPointer<vtkCell>);
		VtkCellWrap();
		~VtkCellWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLength2(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetParametricCenter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetParametricDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointIds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsExplicitCell(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsLinear(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsPrimaryCell(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RequiresExplicitFaceRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RequiresInitialization(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCELLWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCELLWRAP_CLASSDEF
#endif
};

#endif
