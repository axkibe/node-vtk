/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPOINTPLACERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPOINTPLACERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPointPlacer.h>

#include "vtkObjectWrap.h"

class VtkPointPlacerWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkPointPlacerWrap(vtkSmartPointer<vtkPointPlacer>);
		VtkPointPlacerWrap();
		~VtkPointPlacerWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPixelTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPixelToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPixelToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWorldTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWorldToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWorldToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPixelTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWorldTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdateInternalState(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
