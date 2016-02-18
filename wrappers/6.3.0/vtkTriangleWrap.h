/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTRIANGLEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTRIANGLEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTriangle.h>

#include "vtkCellWrap.h"
#include "../../plus/plus.h"

class VtkTriangleWrap : public VtkCellWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkTriangleWrap(vtkSmartPointer<vtkTriangle>);
		VtkTriangleWrap();
		~VtkTriangleWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BarycentricCoords(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CellBoundary(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Circumcircle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeArea(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeNormal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeNormalDirection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeQuadric(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellDimension(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdge(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFace(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfEdges(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfFaces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetParametricCenter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetParametricDistance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InterpolateDerivs(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InterpolateFunctions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InterpolationDerivs(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InterpolationFunctions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PointInTriangle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ProjectTo2D(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TriangleArea(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TriangleCenter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Triangulate(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKTRIANGLEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKTRIANGLEWRAP_CLASSDEF
#endif
};

#endif
