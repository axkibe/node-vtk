/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKRECTILINEARGRIDALGORITHMWRAP_H
#define NATIVE_EXTENSION_VTK_VTKRECTILINEARGRIDALGORITHMWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkRectilinearGridAlgorithm.h>

#include "vtkAlgorithmWrap.h"

class VtkRectilinearGridAlgorithmWrap : public VtkAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkRectilinearGridAlgorithmWrap(vtkSmartPointer<vtkRectilinearGridAlgorithm>);
		VtkRectilinearGridAlgorithmWrap();
		~VtkRectilinearGridAlgorithmWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddInputData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRectilinearGridInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif