/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKAMRSLICEFILTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKAMRSLICEFILTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAMRSliceFilter.h>

#include "vtkOverlappingAMRAlgorithmWrap.h"

class VtkAMRSliceFilterWrap : public VtkOverlappingAMRAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkAMRSliceFilterWrap(vtkSmartPointer<vtkAMRSliceFilter>);
		VtkAMRSliceFilterWrap();
		~VtkAMRSliceFilterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void EnablePrefetchingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void EnablePrefetchingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FillInputPortInformation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FillOutputPortInformation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ForwardUpstreamOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ForwardUpstreamOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetController(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetEnablePrefetching(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetForwardUpstream(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaxResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNormal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOffSetFromOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetController(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetEnablePrefetching(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetForwardUpstream(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaxResolution(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNormal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOffSetFromOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
