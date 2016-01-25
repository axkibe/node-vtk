/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKUNDIRECTEDGRAPHALGORITHMWRAP_H
#define NATIVE_EXTENSION_VTK_VTKUNDIRECTEDGRAPHALGORITHMWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkUndirectedGraphAlgorithm.h>

#include "vtkAlgorithmWrap.h"

class VtkUndirectedGraphAlgorithmWrap : public VtkAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkUndirectedGraphAlgorithmWrap(vtkSmartPointer<vtkUndirectedGraphAlgorithm>);
		VtkUndirectedGraphAlgorithmWrap();
		~VtkUndirectedGraphAlgorithmWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif