/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKX3DEXPORTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKX3DEXPORTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkX3DExporter.h>

#include "vtkExporterWrap.h"

class VtkX3DExporterWrap : public VtkExporterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkX3DExporterWrap(vtkSmartPointer<vtkX3DExporter>);
		VtkX3DExporterWrap();
		~VtkX3DExporterWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BinaryOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BinaryOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FastestOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FastestOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBinary(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBinaryMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBinaryMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFastest(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFastestMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFastestMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputStringLength(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSpeed(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWriteToOutputString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RegisterAndGetOutputString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBinary(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFastest(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSpeed(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWriteToOutputString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WriteToOutputStringOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void WriteToOutputStringOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
