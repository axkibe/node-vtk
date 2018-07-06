/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKUNSTRUCTUREDGRIDQUADRICDECIMATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKUNSTRUCTUREDGRIDQUADRICDECIMATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkUnstructuredGridQuadricDecimation.h>

#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkUnstructuredGridQuadricDecimationWrap : public VtkUnstructuredGridAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkUnstructuredGridQuadricDecimationWrap(vtkSmartPointer<vtkUnstructuredGridQuadricDecimation>);
		VtkUnstructuredGridQuadricDecimationWrap();
		~VtkUnstructuredGridQuadricDecimationWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetAutoAddCandidates(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAutoAddCandidatesThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBoundaryWeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfCandidates(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfEdgesToDecimate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfTetsOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScalarsName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTargetReduction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAutoAddCandidates(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAutoAddCandidatesThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBoundaryWeight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfCandidates(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfEdgesToDecimate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfTetsOutput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScalarsName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTargetReduction(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKUNSTRUCTUREDGRIDQUADRICDECIMATIONWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKUNSTRUCTUREDGRIDQUADRICDECIMATIONWRAP_CLASSDEF
#endif
};

#endif
