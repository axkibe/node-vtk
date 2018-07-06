/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSPHEREPUZZLEARROWSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSPHEREPUZZLEARROWSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkSpherePuzzleArrows.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkSpherePuzzleArrowsWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkSpherePuzzleArrowsWrap(vtkSmartPointer<vtkSpherePuzzleArrows>);
		VtkSpherePuzzleArrowsWrap();
		~VtkSpherePuzzleArrowsWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetPermutation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPermutation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPermutationComponent(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKSPHEREPUZZLEARROWSWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKSPHEREPUZZLEARROWSWRAP_CLASSDEF
#endif
};

#endif
