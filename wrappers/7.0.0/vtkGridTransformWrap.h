/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGRIDTRANSFORMWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGRIDTRANSFORMWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGridTransform.h>

#include "vtkWarpTransformWrap.h"

class VtkGridTransformWrap : public VtkWarpTransformWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkGridTransformWrap(vtkSmartPointer<vtkGridTransform>);
		VtkGridTransformWrap();
		~VtkGridTransformWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDisplacementGrid(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDisplacementScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDisplacementShift(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInterpolationMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInterpolationModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MakeTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDisplacementGridConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDisplacementGridData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDisplacementScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDisplacementShift(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolationMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolationModeToCubic(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolationModeToLinear(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInterpolationModeToNearestNeighbor(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
