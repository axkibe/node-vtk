/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGEOTRANSFORMWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGEOTRANSFORMWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGeoTransform.h>

#include "vtkAbstractTransformWrap.h"

class VtkGeoTransformWrap : public VtkAbstractTransformWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkGeoTransformWrap(vtkSmartPointer<vtkGeoTransform>);
		VtkGeoTransformWrap();
		~VtkGeoTransformWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDestinationProjection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSourceProjection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InternalTransformPoint(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Inverse(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MakeTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDestinationProjection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSourceProjection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TransformPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
