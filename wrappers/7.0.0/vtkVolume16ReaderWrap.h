/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKVOLUME16READERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKVOLUME16READERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkVolume16Reader.h>

#include "vtkVolumeReaderWrap.h"

class VtkVolume16ReaderWrap : public VtkVolumeReaderWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkVolume16ReaderWrap(vtkSmartPointer<vtkVolume16Reader>);
		VtkVolume16ReaderWrap();
		~VtkVolume16ReaderWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataByteOrder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataByteOrderAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHeaderSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImage(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSwapBytes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataByteOrder(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataByteOrderToBigEndian(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataByteOrderToLittleEndian(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHeaderSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSwapBytes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SwapBytesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SwapBytesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
