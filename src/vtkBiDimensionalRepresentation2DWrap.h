/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKBIDIMENSIONALREPRESENTATION2DWRAP_H
#define NATIVE_EXTENSION_VTK_VTKBIDIMENSIONALREPRESENTATION2DWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkBiDimensionalRepresentation2D.h>

#include "vtkBiDimensionalRepresentationWrap.h"

class VtkBiDimensionalRepresentation2DWrap : public VtkBiDimensionalRepresentationWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkBiDimensionalRepresentation2DWrap(vtkSmartPointer<vtkBiDimensionalRepresentation2D>);
		VtkBiDimensionalRepresentation2DWrap();
		~VtkBiDimensionalRepresentation2DWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLabelText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectedLineProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Highlight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
