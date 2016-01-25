/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKMERGEFILTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKMERGEFILTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkMergeFilter.h>

#include "vtkDataSetAlgorithmWrap.h"

class VtkMergeFilterWrap : public VtkDataSetAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkMergeFilterWrap(vtkSmartPointer<vtkMergeFilter>);
		VtkMergeFilterWrap();
		~VtkMergeFilterWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddField(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNormals(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTCoords(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTensors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetVectors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGeometryConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGeometryInputData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNormalsConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNormalsData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarsConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarsData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTCoordsConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTCoordsData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTensorsConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTensorsData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVectorsConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetVectorsData(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
