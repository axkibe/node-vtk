/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCURVATURESWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCURVATURESWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCurvatures.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkCurvaturesWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCurvaturesWrap(vtkSmartPointer<vtkCurvatures>);
		VtkCurvaturesWrap();
		~VtkCurvaturesWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetCurvatureType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInvertMeanCurvature(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InvertMeanCurvatureOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InvertMeanCurvatureOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCurvatureType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCurvatureTypeToGaussian(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCurvatureTypeToMaximum(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCurvatureTypeToMean(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCurvatureTypeToMinimum(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInvertMeanCurvature(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKCURVATURESWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKCURVATURESWRAP_CLASSDEF
#endif
};

#endif
