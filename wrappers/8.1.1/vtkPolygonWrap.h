/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPOLYGONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPOLYGONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPolygon.h>

#include "vtkCellWrap.h"
#include "../../plus/plus.h"

class VtkPolygonWrap : public VtkCellWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPolygonWrap(vtkSmartPointer<vtkPolygon>);
		VtkPolygonWrap();
		~VtkPolygonWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BoundedTriangulate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CellBoundary(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeArea(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeCentroid(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeNormal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellDimension(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdge(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFace(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfEdges(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfFaces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseMVCInterpolation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IntersectConvex2DCells(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsConvex(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsPrimaryCell(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NonDegenerateTriangulate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseMVCInterpolation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Triangulate(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKPOLYGONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKPOLYGONWRAP_CLASSDEF
#endif
};

#endif
