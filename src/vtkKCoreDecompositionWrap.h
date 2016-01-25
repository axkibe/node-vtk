/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKKCOREDECOMPOSITIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKKCOREDECOMPOSITIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkKCoreDecomposition.h>

#include "vtkGraphAlgorithmWrap.h"

class VtkKCoreDecompositionWrap : public VtkGraphAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkKCoreDecompositionWrap(vtkSmartPointer<vtkKCoreDecomposition>);
		VtkKCoreDecompositionWrap();
		~VtkKCoreDecompositionWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CheckInputGraphOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CheckInputGraphOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseInDegreeNeighborsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseInDegreeNeighborsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseOutDegreeNeighborsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseOutDegreeNeighborsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif