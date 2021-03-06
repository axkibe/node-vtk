/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKDUPLICATEPOLYDATAWRAP_H
#define NATIVE_EXTENSION_VTK_VTKDUPLICATEPOLYDATAWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkDuplicatePolyData.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkDuplicatePolyDataWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkDuplicatePolyDataWrap(vtkSmartPointer<vtkDuplicatePolyData>);
		VtkDuplicatePolyDataWrap();
		~VtkDuplicatePolyDataWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClientFlag(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetController(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMemorySize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSocketController(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSynchronous(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InitializeSchedule(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetClientFlag(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetController(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSocketController(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSynchronous(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SynchronousOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SynchronousOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKDUPLICATEPOLYDATAWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKDUPLICATEPOLYDATAWRAP_CLASSDEF
#endif
};

#endif
