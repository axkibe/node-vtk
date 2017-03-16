/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSPLINEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSPLINEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkSpline.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkSplineWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkSplineWrap(vtkSmartPointer<vtkSpline>);
		VtkSplineWrap();
		~VtkSplineWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ClampValueOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ClampValueOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ClosedOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ClosedOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClampValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClosed(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLeftConstraint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLeftConstraintMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLeftConstraintMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLeftValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMTime(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetParametricRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRightConstraint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRightConstraintMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRightConstraintMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRightValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveAllPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemovePoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetClampValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetClosed(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLeftConstraint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLeftValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetParametricRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRightConstraint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRightValue(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKSPLINEWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKSPLINEWRAP_CLASSDEF
#endif
};

#endif
