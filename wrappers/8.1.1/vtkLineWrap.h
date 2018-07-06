/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKLINEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKLINEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkLine.h>

#include "vtkCellWrap.h"
#include "../../plus/plus.h"

class VtkLineWrap : public VtkCellWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkLineWrap(vtkSmartPointer<vtkLine>);
		VtkLineWrap();
		~VtkLineWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void CellBoundary(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DistanceToLine(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellDimension(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdge(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFace(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfEdges(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfFaces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetParametricCenter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InterpolateDerivs(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InterpolateFunctions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InterpolationDerivs(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InterpolationFunctions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Triangulate(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKLINEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKLINEWRAP_CLASSDEF
#endif
};

#endif
