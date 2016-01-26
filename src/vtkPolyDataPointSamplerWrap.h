/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPOLYDATAPOINTSAMPLERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPOLYDATAPOINTSAMPLERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPolyDataPointSampler.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkPolyDataPointSamplerWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPolyDataPointSamplerWrap(vtkSmartPointer<vtkPolyDataPointSampler>);
		VtkPolyDataPointSamplerWrap();
		~VtkPolyDataPointSamplerWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GenerateEdgePointsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateEdgePointsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateInteriorPointsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateInteriorPointsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateVertexPointsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateVertexPointsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateVerticesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateVerticesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDistanceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDistanceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGenerateEdgePoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGenerateInteriorPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGenerateVertexPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGenerateVertices(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGenerateEdgePoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGenerateInteriorPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGenerateVertexPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGenerateVertices(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
