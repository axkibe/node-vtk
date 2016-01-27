/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGEOARCSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGEOARCSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGeoArcs.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkGeoArcsWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkGeoArcsWrap(vtkSmartPointer<vtkGeoArcs>);
		VtkGeoArcsWrap();
		~VtkGeoArcsWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetExplodeFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGlobeRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfSubdivisions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetExplodeFactor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGlobeRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfSubdivisions(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
