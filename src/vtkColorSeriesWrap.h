/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCOLORSERIESWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCOLORSERIESWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkColorSeries.h>

#include "vtkObjectWrap.h"

class VtkColorSeriesWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkColorSeriesWrap(vtkSmartPointer<vtkColorSeries>);
		VtkColorSeriesWrap();
		~VtkColorSeriesWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BuildLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ClearColors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CreateLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetColorScheme(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfColorSchemes(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfColors(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetColorScheme(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfColors(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
