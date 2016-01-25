/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSTRUCTUREDGRIDWRITERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSTRUCTUREDGRIDWRITERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkStructuredGridWriter.h>

#include "vtkDataWriterWrap.h"

class VtkStructuredGridWriterWrap : public VtkDataWriterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkStructuredGridWriterWrap(vtkSmartPointer<vtkStructuredGridWriter>);
		VtkStructuredGridWriterWrap();
		~VtkStructuredGridWriterWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif