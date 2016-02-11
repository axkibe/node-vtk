/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCURSOR3DWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCURSOR3DWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCursor3D.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkCursor3DWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCursor3DWrap(vtkSmartPointer<vtkCursor3D>);
		VtkCursor3DWrap();
		~VtkCursor3DWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AllOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AllOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AxesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AxesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAxes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFocalPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFocus(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetModelBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutline(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTranslationMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWrap(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXShadows(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYShadows(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZShadows(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OutlineOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OutlineOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAxes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFocalPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetModelBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutline(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTranslationMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWrap(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXShadows(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetYShadows(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetZShadows(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TranslationModeOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TranslationModeOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WrapOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WrapOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void XShadowsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void XShadowsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void YShadowsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void YShadowsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ZShadowsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ZShadowsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
