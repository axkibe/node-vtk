/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKRECURSIVEDIVIDINGCUBESWRAP_H
#define NATIVE_EXTENSION_VTK_VTKRECURSIVEDIVIDINGCUBESWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkRecursiveDividingCubes.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkRecursiveDividingCubesWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkRecursiveDividingCubesWrap(vtkSmartPointer<vtkRecursiveDividingCubes>);
		VtkRecursiveDividingCubesWrap();
		~VtkRecursiveDividingCubesWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDistanceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDistanceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIncrement(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIncrementMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIncrementMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIncrement(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
