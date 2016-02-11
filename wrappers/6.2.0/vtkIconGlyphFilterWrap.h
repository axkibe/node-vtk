/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKICONGLYPHFILTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKICONGLYPHFILTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkIconGlyphFilter.h>

#include "vtkPolyDataAlgorithmWrap.h"

class VtkIconGlyphFilterWrap : public VtkPolyDataAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkIconGlyphFilterWrap(vtkSmartPointer<vtkIconGlyphFilter>);
		VtkIconGlyphFilterWrap();
		~VtkIconGlyphFilterWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDisplaySize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGravity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIconScaling(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIconSheetSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIconSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPassScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetUseIconSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PassScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PassScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDisplaySize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGravity(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGravityToBottomCenter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGravityToBottomLeft(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGravityToBottomRight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGravityToCenterCenter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGravityToCenterLeft(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGravityToCenterRight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGravityToTopCenter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGravityToTopLeft(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGravityToTopRight(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIconScaling(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIconScalingToScalingArray(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIconScalingToScalingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIconSheetSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIconSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOffset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPassScalars(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetUseIconSize(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseIconSizeOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UseIconSizeOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
