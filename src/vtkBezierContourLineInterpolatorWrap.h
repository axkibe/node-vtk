/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKBEZIERCONTOURLINEINTERPOLATORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKBEZIERCONTOURLINEINTERPOLATORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkBezierContourLineInterpolator.h>

#include "vtkContourLineInterpolatorWrap.h"

class VtkBezierContourLineInterpolatorWrap : public VtkContourLineInterpolatorWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkBezierContourLineInterpolatorWrap(vtkSmartPointer<vtkBezierContourLineInterpolator>);
		VtkBezierContourLineInterpolatorWrap();
		~VtkBezierContourLineInterpolatorWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumCurveError(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumCurveErrorMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumCurveErrorMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumCurveLineSegments(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumCurveLineSegmentsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumCurveLineSegmentsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSpan(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InterpolateLine(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumCurveError(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumCurveLineSegments(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
