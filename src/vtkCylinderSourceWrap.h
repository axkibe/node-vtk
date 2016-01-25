/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCYLINDERSOURCEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCYLINDERSOURCEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCylinderSource.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkCylinderSourceWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkCylinderSourceWrap(vtkSmartPointer<vtkCylinderSource>);
		VtkCylinderSourceWrap();
		~VtkCylinderSourceWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CappingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CappingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCapping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHeightMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHeightMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRadiusMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRadiusMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResolutionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResolutionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCapping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif