/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTABLETODATABASEWRITERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTABLETODATABASEWRITERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTableToDatabaseWriter.h>

#include "vtkWriterWrap.h"

class VtkTableToDatabaseWriterWrap : public VtkWriterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkTableToDatabaseWriterWrap(vtkSmartPointer<vtkTableToDatabaseWriter>);
		VtkTableToDatabaseWriterWrap();
		~VtkTableToDatabaseWriterWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDatabase(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif