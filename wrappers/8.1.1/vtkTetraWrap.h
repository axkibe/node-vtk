/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTETRAWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTETRAWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTetra.h>

#include "vtkCell3DWrap.h"
#include "../../plus/plus.h"

class VtkTetraWrap : public VtkCell3DWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkTetraWrap(vtkSmartPointer<vtkTetra>);
		VtkTetraWrap();
		~VtkTetraWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BarycentricCoords(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CellBoundary(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Circumsphere(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeVolume(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdge(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdgeArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFace(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFaceArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfEdges(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfFaces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetParametricCenter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetParametricDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Insphere(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InterpolateDerivs(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InterpolateFunctions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InterpolationDerivs(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InterpolationFunctions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TetraCenter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Triangulate(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKTETRAWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKTETRAWRAP_CLASSDEF
#endif
};

#endif
