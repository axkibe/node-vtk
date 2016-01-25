/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPOLYDATASTREAMERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPOLYDATASTREAMERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPolyDataStreamer.h>

#include "vtkStreamerBaseWrap.h"

class VtkPolyDataStreamerWrap : public VtkStreamerBaseWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkPolyDataStreamerWrap(vtkSmartPointer<vtkPolyDataStreamer>);
		VtkPolyDataStreamerWrap();
		~VtkPolyDataStreamerWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ColorByPieceOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ColorByPieceOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetColorByPiece(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfStreamDivisions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColorByPiece(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfStreamDivisions(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
