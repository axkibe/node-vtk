/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKEXTRACTPOLYDATAGEOMETRYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKEXTRACTPOLYDATAGEOMETRYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkExtractPolyDataGeometry.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkExtractPolyDataGeometryWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkExtractPolyDataGeometryWrap(vtkSmartPointer<vtkExtractPolyDataGeometry>);
		VtkExtractPolyDataGeometryWrap();
		~VtkExtractPolyDataGeometryWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ExtractBoundaryCellsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ExtractBoundaryCellsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ExtractInsideOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ExtractInsideOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetExtractBoundaryCells(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetExtractInside(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImplicitFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPassPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PassPointsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PassPointsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetExtractBoundaryCells(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetExtractInside(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetImplicitFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPassPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
