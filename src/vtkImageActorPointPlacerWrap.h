/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGEACTORPOINTPLACERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGEACTORPOINTPLACERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageActorPointPlacer.h>

#include "vtkPointPlacerWrap.h"

class VtkImageActorPointPlacerWrap : public VtkPointPlacerWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkImageActorPointPlacerWrap(vtkSmartPointer<vtkImageActorPointPlacer>);
		VtkImageActorPointPlacerWrap();
		~VtkImageActorPointPlacerWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetImageActor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetImageActor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWorldTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UpdateInternalState(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
