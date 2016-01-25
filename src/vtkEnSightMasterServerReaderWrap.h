/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKENSIGHTMASTERSERVERREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKENSIGHTMASTERSERVERREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkEnSightMasterServerReader.h>

#include "vtkGenericEnSightReaderWrap.h"

class VtkEnSightMasterServerReaderWrap : public VtkGenericEnSightReaderWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkEnSightMasterServerReaderWrap(vtkSmartPointer<vtkEnSightMasterServerReader>);
		VtkEnSightMasterServerReaderWrap();
		~VtkEnSightMasterServerReaderWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CanReadFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DetermineFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCurrentPiece(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPieceCaseFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCurrentPiece(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
