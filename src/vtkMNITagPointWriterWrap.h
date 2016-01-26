/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKMNITAGPOINTWRITERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKMNITAGPOINTWRITERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkMNITagPointWriter.h>

#include "vtkWriterWrap.h"

class VtkMNITagPointWriterWrap : public VtkWriterWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkMNITagPointWriterWrap(vtkSmartPointer<vtkMNITagPointWriter>);
		VtkMNITagPointWriterWrap();
		~VtkMNITagPointWriterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComments(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDescriptiveName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileExtensions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPatientIds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetStructureIds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWeights(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetComments(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLabelText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPatientIds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetStructureIds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWeights(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Write(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
