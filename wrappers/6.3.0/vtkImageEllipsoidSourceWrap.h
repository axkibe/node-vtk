/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKIMAGEELLIPSOIDSOURCEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKIMAGEELLIPSOIDSOURCEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkImageEllipsoidSource.h>

#include "vtkImageAlgorithmWrap.h"

class VtkImageEllipsoidSourceWrap : public VtkImageAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkImageEllipsoidSourceWrap(vtkSmartPointer<vtkImageEllipsoidSource>);
		VtkImageEllipsoidSourceWrap();
		~VtkImageEllipsoidSourceWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarTypeToChar(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarTypeToDouble(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarTypeToFloat(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarTypeToInt(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarTypeToLong(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarTypeToShort(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarTypeToUnsignedChar(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarTypeToUnsignedInt(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarTypeToUnsignedLong(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputScalarTypeToUnsignedShort(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
