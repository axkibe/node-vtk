/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCPEXODUSIIINSITUREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCPEXODUSIIINSITUREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCPExodusIIInSituReader.h>

#include "vtkMultiBlockDataSetAlgorithmWrap.h"

class VtkCPExodusIIInSituReaderWrap : public VtkMultiBlockDataSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkCPExodusIIInSituReaderWrap(vtkSmartPointer<vtkCPExodusIIInSituReader>);
		VtkCPExodusIIInSituReaderWrap();
		~VtkCPExodusIIInSituReaderWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCurrentTimeStep(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTimeStepValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCurrentTimeStep(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
