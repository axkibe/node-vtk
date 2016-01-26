/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSTREAMPOINTSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSTREAMPOINTSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkStreamPoints.h>

#include "vtkStreamerWrap.h"

class VtkStreamPointsWrap : public VtkStreamerWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkStreamPointsWrap(vtkSmartPointer<vtkStreamPoints>);
		VtkStreamPointsWrap();
		~VtkStreamPointsWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTimeIncrement(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTimeIncrementMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTimeIncrementMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTimeIncrement(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
