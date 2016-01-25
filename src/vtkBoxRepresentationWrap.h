/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKBOXREPRESENTATIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKBOXREPRESENTATIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkBoxRepresentation.h>

#include "vtkWidgetRepresentationWrap.h"

class VtkBoxRepresentationWrap : public VtkWidgetRepresentationWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkBoxRepresentationWrap(vtkSmartPointer<vtkBoxRepresentation>);
		VtkBoxRepresentationWrap();
		~VtkBoxRepresentationWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFaceProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetHandleProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInsideOut(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutlineCursorWires(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutlineFaceWires(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutlineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPolyData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectedFaceProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectedHandleProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectedOutlineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HandlesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HandlesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InsideOutOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InsideOutOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OutlineCursorWiresOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OutlineCursorWiresOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OutlineFaceWiresOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void OutlineFaceWiresOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInsideOut(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutlineCursorWires(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutlineFaceWires(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
