/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKANGLEREPRESENTATION2DWRAP_H
#define NATIVE_EXTENSION_VTK_VTKANGLEREPRESENTATION2DWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAngleRepresentation2D.h>

#include "vtkAngleRepresentationWrap.h"

class VtkAngleRepresentation2DWrap : public VtkAngleRepresentationWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkAngleRepresentation2DWrap(vtkSmartPointer<vtkAngleRepresentation2D>);
		VtkAngleRepresentation2DWrap();
		~VtkAngleRepresentation2DWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAngle(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetArc(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRay1(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRay2(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
