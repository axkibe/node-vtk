/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGENERICADAPTORCELLWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGENERICADAPTORCELLWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGenericAdaptorCell.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkGenericAdaptorCellWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkGenericAdaptorCellWrap(vtkSmartPointer<vtkGenericAdaptorCell>);
		VtkGenericAdaptorCellWrap();
		~VtkGenericAdaptorCellWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void Clip(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Contour(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHighestOrderAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLength2(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsAttributeLinear(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsGeometryLinear(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Tessellate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TriangulateFace(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKGENERICADAPTORCELLWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKGENERICADAPTORCELLWRAP_CLASSDEF
#endif
};

#endif
