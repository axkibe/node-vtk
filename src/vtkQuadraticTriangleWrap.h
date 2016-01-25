/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKQUADRATICTRIANGLEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKQUADRATICTRIANGLEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkQuadraticTriangle.h>

#include "vtkNonLinearCellWrap.h"

class VtkQuadraticTriangleWrap : public VtkNonLinearCellWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkQuadraticTriangleWrap(vtkSmartPointer<vtkQuadraticTriangle>);
		VtkQuadraticTriangleWrap();
		~VtkQuadraticTriangleWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetCellDimension(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEdge(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFace(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfEdges(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfFaces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Triangulate(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
