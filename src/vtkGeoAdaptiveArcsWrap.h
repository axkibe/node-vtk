/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGEOADAPTIVEARCSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGEOADAPTIVEARCSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGeoAdaptiveArcs.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkGeoAdaptiveArcsWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkGeoAdaptiveArcsWrap(vtkSmartPointer<vtkGeoAdaptiveArcs>);
		VtkGeoAdaptiveArcsWrap();
		~VtkGeoAdaptiveArcsWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGlobeRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumPixelSeparation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinimumPixelSeparation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGlobeRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumPixelSeparation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMinimumPixelSeparation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
