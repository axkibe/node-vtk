/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKAPPENDPOLYDATAWRAP_H
#define NATIVE_EXTENSION_VTK_VTKAPPENDPOLYDATAWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAppendPolyData.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkAppendPolyDataWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkAppendPolyDataWrap(vtkSmartPointer<vtkAppendPolyData>);
		VtkAppendPolyDataWrap();
		~VtkAppendPolyDataWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddInputData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetParallelStreaming(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUserManagedInputs(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ParallelStreamingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ParallelStreamingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveInputData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputConnectionByNumber(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputDataByNumber(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfInputs(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetParallelStreaming(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUserManagedInputs(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UserManagedInputsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UserManagedInputsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKAPPENDPOLYDATAWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKAPPENDPOLYDATAWRAP_CLASSDEF
#endif
};

#endif
