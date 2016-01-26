/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKLABELEDCONTOURMAPPERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKLABELEDCONTOURMAPPERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkLabeledContourMapper.h>

#include "vtkMapperWrap.h"

class VtkLabeledContourMapperWrap : public VtkMapperWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkLabeledContourMapperWrap(vtkSmartPointer<vtkLabeledContourMapper>);
		VtkLabeledContourMapperWrap();
		~VtkLabeledContourMapperWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPolyDataMapper(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextProperties(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextPropertyMapping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LabelVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void LabelVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Render(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTextProperties(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTextPropertyMapping(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
