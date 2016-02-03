/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKAREAPICKERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKAREAPICKERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAreaPicker.h>

#include "vtkAbstractPropPickerWrap.h"

class VtkAreaPickerWrap : public VtkAbstractPropPickerWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkAreaPickerWrap(vtkSmartPointer<vtkAreaPicker>);
		VtkAreaPickerWrap();
		~VtkAreaPickerWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AreaPick(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClipPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataSet(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFrustum(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMapper(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetProp3Ds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Pick(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPickCoords(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
