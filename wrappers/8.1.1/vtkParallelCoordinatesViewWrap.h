/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPARALLELCOORDINATESVIEWWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPARALLELCOORDINATESVIEWWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkParallelCoordinatesView.h>

#include "vtkRenderViewWrap.h"
#include "../../plus/plus.h"

class VtkParallelCoordinatesViewWrap : public VtkRenderViewWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkParallelCoordinatesViewWrap(vtkSmartPointer<vtkParallelCoordinatesView>);
		VtkParallelCoordinatesViewWrap();
		~VtkParallelCoordinatesViewWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void ApplyViewTheme(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBrushMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBrushOperator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCurrentBrushClass(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInspectMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumNumberOfBrushPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBrushMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBrushModeToAngle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBrushModeToAxisThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBrushModeToFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBrushModeToLasso(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBrushOperator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBrushOperatorToAdd(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBrushOperatorToIntersect(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBrushOperatorToReplace(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBrushOperatorToSubtract(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCurrentBrushClass(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInpsectModeToSelectData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInspectMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInspectModeToManipulateAxes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumNumberOfBrushPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKPARALLELCOORDINATESVIEWWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKPARALLELCOORDINATESVIEWWRAP_CLASSDEF
#endif
};

#endif
