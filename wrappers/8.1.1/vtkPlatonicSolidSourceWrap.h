/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPLATONICSOLIDSOURCEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPLATONICSOLIDSOURCEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPlatonicSolidSource.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkPlatonicSolidSourceWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPlatonicSolidSourceWrap(vtkSmartPointer<vtkPlatonicSolidSource>);
		VtkPlatonicSolidSourceWrap();
		~VtkPlatonicSolidSourceWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSolidType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSolidTypeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSolidTypeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSolidType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSolidTypeToCube(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSolidTypeToDodecahedron(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSolidTypeToIcosahedron(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSolidTypeToOctahedron(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSolidTypeToTetrahedron(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKPLATONICSOLIDSOURCEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKPLATONICSOLIDSOURCEWRAP_CLASSDEF
#endif
};

#endif
