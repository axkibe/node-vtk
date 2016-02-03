/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPTSREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPTSREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPTSReader.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkPTSReaderWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPTSReaderWrap(vtkSmartPointer<vtkPTSReader>);
		VtkPTSReaderWrap();
		~VtkPTSReaderWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLimitReadToBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLimitToMaxNumberOfPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputDataTypeIsDouble(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LimitReadToBoundsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LimitReadToBoundsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LimitToMaxNumberOfPointsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LimitToMaxNumberOfPointsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OutputDataTypeIsDoubleOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OutputDataTypeIsDoubleOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLimitReadToBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLimitToMaxNumberOfPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputDataTypeIsDouble(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetReadBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
