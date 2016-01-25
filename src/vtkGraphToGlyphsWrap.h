/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGRAPHTOGLYPHSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGRAPHTOGLYPHSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGraphToGlyphs.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkGraphToGlyphsWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkGraphToGlyphsWrap(vtkSmartPointer<vtkGraphToGlyphs>);
		VtkGraphToGlyphsWrap();
		~VtkGraphToGlyphsWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void FilledOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FilledOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGlyphType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScreenSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGlyphType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScreenSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
