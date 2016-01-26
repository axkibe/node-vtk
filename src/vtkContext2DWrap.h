/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCONTEXT2DWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCONTEXT2DWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkContext2D.h>

#include "vtkObjectWrap.h"

class VtkContext2DWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkContext2DWrap(vtkSmartPointer<vtkContext2D>);
		VtkContext2DWrap();
		~VtkContext2DWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AppendTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ApplyBrush(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ApplyPen(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ApplyTextProp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BufferIdModeBegin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BufferIdModeEnd(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeStringBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawLine(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawMathTextString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawPointSprites(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawPoly(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawPolygon(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawQuadStrip(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawStringRect(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBrush(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPen(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextProp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PopMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PushMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
