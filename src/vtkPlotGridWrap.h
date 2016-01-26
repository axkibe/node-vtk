/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKPLOTGRIDWRAP_H
#define NATIVE_EXTENSION_VTK_VTKPLOTGRIDWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkPlotGrid.h>

#include "vtkContextItemWrap.h"

class VtkPlotGridWrap : public VtkContextItemWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkPlotGridWrap(vtkSmartPointer<vtkPlotGrid>);
		VtkPlotGridWrap();
		~VtkPlotGridWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetXAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetYAxis(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
