/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKRESLICECURSORPOLYDATAALGORITHMWRAP_H
#define NATIVE_EXTENSION_VTK_VTKRESLICECURSORPOLYDATAALGORITHMWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkResliceCursorPolyDataAlgorithm.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkResliceCursorPolyDataAlgorithmWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkResliceCursorPolyDataAlgorithmWrap(vtkSmartPointer<vtkResliceCursorPolyDataAlgorithm>);
		VtkResliceCursorPolyDataAlgorithmWrap();
		~VtkResliceCursorPolyDataAlgorithmWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetAxis1(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAxis2(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCenterlineAxis1(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCenterlineAxis2(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOtherPlaneForAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPlaneAxis1(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPlaneAxis2(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetResliceCursor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetReslicePlaneNormal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSliceBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetThickSlabAxis1(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetThickSlabAxis2(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetResliceCursor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetReslicePlaneNormal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetReslicePlaneNormalToXAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetReslicePlaneNormalToYAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetReslicePlaneNormalToZAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSliceBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
