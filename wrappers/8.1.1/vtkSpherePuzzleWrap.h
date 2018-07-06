/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSPHEREPUZZLEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSPHEREPUZZLEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkSpherePuzzle.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "../../plus/plus.h"

class VtkSpherePuzzleWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkSpherePuzzleWrap(vtkSmartPointer<vtkSpherePuzzle>);
		VtkSpherePuzzleWrap();
		~VtkSpherePuzzleWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void MoveHorizontal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MovePoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MoveVertical(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Reset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKSPHEREPUZZLEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKSPHEREPUZZLEWRAP_CLASSDEF
#endif
};

#endif
