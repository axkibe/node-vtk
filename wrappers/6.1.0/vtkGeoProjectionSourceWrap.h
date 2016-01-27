/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGEOPROJECTIONSOURCEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGEOPROJECTIONSOURCEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGeoProjectionSource.h>

#include "vtkGeoSourceWrap.h"

class VtkGeoProjectionSourceWrap : public VtkGeoSourceWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkGeoProjectionSourceWrap(vtkSmartPointer<vtkGeoProjectionSource>);
		VtkGeoProjectionSourceWrap();
		~VtkGeoProjectionSourceWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinCellsPerNode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProjection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMinCellsPerNode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetProjection(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif