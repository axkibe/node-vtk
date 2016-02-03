/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGECANVASSOURCE2DWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGECANVASSOURCE2DWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageCanvasSource2D.h>

#include "vtkImageAlgorithmWrap.h"

class VtkImageCanvasSource2DWrap : public VtkImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageCanvasSource2DWrap(vtkSmartPointer<vtkImageCanvasSource2D>);
		VtkImageCanvasSource2DWrap();
		~VtkImageCanvasSource2DWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void DrawCircle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawImage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawSegment(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DrawSegment3D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FillBox(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FillPixel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FillTriangle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FillTube(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDefaultZ(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfScalarComponents(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InitializeCanvasVolume(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDefaultZ(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDrawColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfScalarComponents(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRatio(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarTypeToChar(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarTypeToDouble(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarTypeToFloat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarTypeToInt(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarTypeToLong(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarTypeToShort(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarTypeToUnsignedChar(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarTypeToUnsignedInt(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarTypeToUnsignedLong(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarTypeToUnsignedShort(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
