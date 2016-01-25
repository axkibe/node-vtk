/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKLOOKUPTABLEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKLOOKUPTABLEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkLookupTable.h>

#include "vtkScalarsToColorsWrap.h"

class VtkLookupTableWrap : public VtkScalarsToColorsWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkLookupTableWrap(vtkSmartPointer<vtkLookupTable>);
		VtkLookupTableWrap();
		~VtkLookupTableWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void Allocate(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Build(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ForceBuild(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRamp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsOpaque(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAlphaRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetHueRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNanColor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRamp(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRampToLinear(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRampToSCurve(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRampToSQRT(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSaturationRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScaleToLinear(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetScaleToLog10(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetTableRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetValueRange(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UsingLogScale(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif