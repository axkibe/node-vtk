/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKEXTRACTGEOMETRYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKEXTRACTGEOMETRYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkExtractGeometry.h>

#include "vtkUnstructuredGridAlgorithmWrap.h"

class VtkExtractGeometryWrap : public VtkUnstructuredGridAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkExtractGeometryWrap(vtkSmartPointer<vtkExtractGeometry>);
		VtkExtractGeometryWrap();
		~VtkExtractGeometryWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ExtractBoundaryCellsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ExtractBoundaryCellsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ExtractInsideOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ExtractInsideOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ExtractOnlyBoundaryCellsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ExtractOnlyBoundaryCellsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetExtractBoundaryCells(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetExtractInside(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetExtractOnlyBoundaryCells(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImplicitFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetExtractBoundaryCells(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetExtractInside(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetExtractOnlyBoundaryCells(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetImplicitFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
