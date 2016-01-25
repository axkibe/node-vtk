/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKMNITAGPOINTREADERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKMNITAGPOINTREADERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkMNITagPointReader.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkMNITagPointReaderWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkMNITagPointReaderWrap(vtkSmartPointer<vtkMNITagPointReader>);
		VtkMNITagPointReaderWrap();
		~VtkMNITagPointReaderWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CanReadFile(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComments(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDescriptiveName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileExtensions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfVolumes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPatientIds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStructureIds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWeights(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
