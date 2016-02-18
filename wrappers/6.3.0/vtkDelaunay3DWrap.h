/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKDELAUNAY3DWRAP_H
#define NATIVE_EXTENSION_VTK_VTKDELAUNAY3DWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkDelaunay3D.h>

#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkDelaunay3DWrap : public VtkUnstructuredGridAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkDelaunay3DWrap(vtkSmartPointer<vtkDelaunay3D>);
		VtkDelaunay3DWrap();
		~VtkDelaunay3DWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AlphaLinesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AlphaLinesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AlphaTetsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AlphaTetsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AlphaTrisOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AlphaTrisOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AlphaVertsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AlphaVertsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BoundingTriangulationOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BoundingTriangulationOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CreateDefaultLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EndPointInsertion(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAlpha(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAlphaLines(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAlphaMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAlphaMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAlphaTets(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAlphaTris(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAlphaVerts(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBoundingTriangulation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOffsetMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOffsetMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetToleranceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetToleranceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAlpha(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAlphaLines(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAlphaTets(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAlphaTris(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAlphaVerts(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBoundingTriangulation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKDELAUNAY3DWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKDELAUNAY3DWRAP_CLASSDEF
#endif
};

#endif
