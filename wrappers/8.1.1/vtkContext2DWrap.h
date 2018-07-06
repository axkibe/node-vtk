/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCONTEXT2DWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCONTEXT2DWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkContext2D.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

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
		static void ComputeJustifiedStringBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeStringBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawArc(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawEllipse(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawEllipseWedge(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawEllipticArc(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawImage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawLine(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawLines(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawMarkers(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawMathTextString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawPointSprites(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawPoly(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawPolyData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawPolygon(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawQuad(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawQuadStrip(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawRect(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawStringRect(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawWedge(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void End(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FloatToInt(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBrush(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBufferIdMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPen(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextProp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MathTextIsSupported(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PopMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PushMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCONTEXT2DWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCONTEXT2DWRAP_CLASSDEF
#endif
};

#endif