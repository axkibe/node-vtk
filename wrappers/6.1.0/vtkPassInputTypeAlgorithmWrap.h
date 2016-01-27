/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPASSINPUTTYPEALGORITHMWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPASSINPUTTYPEALGORITHMWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPassInputTypeAlgorithm.h>

#include "vtkAlgorithmWrap.h"

class VtkPassInputTypeAlgorithmWrap : public VtkAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPassInputTypeAlgorithmWrap(vtkSmartPointer<vtkPassInputTypeAlgorithm>);
		VtkPassInputTypeAlgorithmWrap();
		~VtkPassInputTypeAlgorithmWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddInputData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGraphOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImageDataOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPolyDataOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRectilinearGridOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStructuredGridOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStructuredPointsOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTableOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUnstructuredGridOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif