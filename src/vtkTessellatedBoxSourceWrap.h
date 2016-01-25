/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTESSELLATEDBOXSOURCEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTESSELLATEDBOXSOURCEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTessellatedBoxSource.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkTessellatedBoxSourceWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkTessellatedBoxSourceWrap(vtkSmartPointer<vtkTessellatedBoxSource>);
		VtkTessellatedBoxSourceWrap();
		~VtkTessellatedBoxSourceWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void DuplicateSharedPointsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DuplicateSharedPointsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDuplicateSharedPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetQuads(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void QuadsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void QuadsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDuplicateSharedPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetQuads(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
