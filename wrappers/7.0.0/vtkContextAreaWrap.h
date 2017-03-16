/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCONTEXTAREAWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCONTEXTAREAWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkContextArea.h>

#include "vtkAbstractContextItemWrap.h"
#include "../../plus/plus.h"

class VtkContextAreaWrap : public VtkAbstractContextItemWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkContextAreaWrap(vtkSmartPointer<vtkContextArea>);
		VtkContextAreaWrap();
		~VtkContextAreaWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void FillViewportOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FillViewportOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDrawAreaItem(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFillViewport(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFixedAspect(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFixedMarginsArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShowGrid(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Paint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFillViewport(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFixedAspect(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFixedMargins(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFixedRect(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShowGrid(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShowGridOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShowGridOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCONTEXTAREAWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCONTEXTAREAWRAP_CLASSDEF
#endif
};

#endif
