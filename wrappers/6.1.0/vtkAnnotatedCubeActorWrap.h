/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKANNOTATEDCUBEACTORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKANNOTATEDCUBEACTORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAnnotatedCubeActor.h>

#include "vtkProp3DWrap.h"

class VtkAnnotatedCubeActorWrap : public VtkProp3DWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkAnnotatedCubeActorWrap(vtkSmartPointer<vtkAnnotatedCubeActor>);
		VtkAnnotatedCubeActorWrap();
		~VtkAnnotatedCubeActorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetActors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAssembly(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCubeProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCubeVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFaceTextScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFaceTextVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextEdgesProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextEdgesVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXFaceTextRotation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXMinusFaceProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXMinusFaceText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXPlusFaceProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetXPlusFaceText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYFaceTextRotation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYMinusFaceProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYMinusFaceText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYPlusFaceProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetYPlusFaceText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZFaceTextRotation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZMinusFaceProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZMinusFaceText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZPlusFaceProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetZPlusFaceText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCubeVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFaceTextScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFaceTextVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTextEdgesVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXFaceTextRotation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXMinusFaceText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXPlusFaceText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetYFaceTextRotation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetYMinusFaceText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetYPlusFaceText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetZFaceTextRotation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetZMinusFaceText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetZPlusFaceText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
