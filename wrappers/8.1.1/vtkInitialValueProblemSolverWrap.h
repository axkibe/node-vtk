/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKINITIALVALUEPROBLEMSOLVERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKINITIALVALUEPROBLEMSOLVERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkInitialValueProblemSolver.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkInitialValueProblemSolverWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkInitialValueProblemSolverWrap(vtkSmartPointer<vtkInitialValueProblemSolver>);
		VtkInitialValueProblemSolverWrap();
		~VtkInitialValueProblemSolverWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetFunctionSet(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsAdaptive(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFunctionSet(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKINITIALVALUEPROBLEMSOLVERWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKINITIALVALUEPROBLEMSOLVERWRAP_CLASSDEF
#endif
};

#endif
