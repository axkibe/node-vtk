/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKRESLICECURSORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKRESLICECURSORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkResliceCursor.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkResliceCursorWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkResliceCursorWrap(vtkSmartPointer<vtkResliceCursor>);
		VtkResliceCursorWrap();
		~VtkResliceCursorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCenterlineAxisPolyData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHole(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHoleWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHoleWidthInPixels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPlane(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPolyData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetThickMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetThickness(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Reset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHole(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHoleWidth(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHoleWidthInPixels(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetImage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetThickMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetThickness(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetYAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetZAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ThickModeOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ThickModeOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Update(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKRESLICECURSORWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKRESLICECURSORWRAP_CLASSDEF
#endif
};

#endif
