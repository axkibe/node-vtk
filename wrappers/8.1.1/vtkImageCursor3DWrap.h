/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGECURSOR3DWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGECURSOR3DWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageCursor3D.h>

#include "vtkImageInPlaceFilterWrap.h"
#include "../../plus/plus.h"

class VtkImageCursor3DWrap : public VtkImageInPlaceFilterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageCursor3DWrap(vtkSmartPointer<vtkImageCursor3D>);
		VtkImageCursor3DWrap();
		~VtkImageCursor3DWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetCursorPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCursorRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCursorValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCursorPosition(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCursorRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCursorValue(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKIMAGECURSOR3DWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKIMAGECURSOR3DWRAP_CLASSDEF
#endif
};

#endif
