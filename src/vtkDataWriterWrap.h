/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKDATAWRITERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKDATAWRITERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkDataWriter.h>

#include "vtkWriterWrap.h"

class VtkDataWriterWrap : public VtkWriterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkDataWriterWrap(vtkSmartPointer<vtkDataWriter>);
		VtkDataWriterWrap();
		~VtkDataWriterWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFieldDataName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileTypeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileTypeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGlobalIdsName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHeader(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLookupTableName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNormalsName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputStringLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPedigreeIdsName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarsName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTCoordsName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTensorsName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVectorsName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWriteToOutputString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RegisterAndGetOutputString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFieldDataName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileTypeToASCII(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileTypeToBinary(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGlobalIdsName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHeader(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLookupTableName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNormalsName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPedigreeIdsName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarsName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTCoordsName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTensorsName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVectorsName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWriteToOutputString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WriteToOutputStringOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WriteToOutputStringOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
