/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKRECTILINEARSYNCHRONIZEDTEMPLATESWRAP_H
#define NATIVE_EXTENSION_VTK_VTKRECTILINEARSYNCHRONIZEDTEMPLATESWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkRectilinearSynchronizedTemplates.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkRectilinearSynchronizedTemplatesWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkRectilinearSynchronizedTemplatesWrap(vtkSmartPointer<vtkRectilinearSynchronizedTemplates>);
		VtkRectilinearSynchronizedTemplatesWrap();
		~VtkRectilinearSynchronizedTemplatesWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ComputeGradientsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeGradientsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeNormalsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeNormalsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateTrianglesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateTrianglesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateValues(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComputeGradients(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComputeNormals(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComputeScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGenerateTriangles(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfContours(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetComputeGradients(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetComputeNormals(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetComputeScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGenerateTriangles(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfContours(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif