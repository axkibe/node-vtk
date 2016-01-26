/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTEXTUREOBJECTWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTEXTUREOBJECTWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTextureObject.h>

#include "vtkObjectWrap.h"

class VtkTextureObjectWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkTextureObjectWrap(vtkSmartPointer<vtkTextureObject>);
		VtkTextureObjectWrap();
		~VtkTextureObjectWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void Bind(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CopyFromFrameBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CopyToFrameBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Download(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAutoParameters(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetBaseLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComponents(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetContext(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDepthTextureCompareFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDepthTextureMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMagnificationFilter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaxLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMinificationFilter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWrapR(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWrapS(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWrapT(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SendParameters(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetAutoParameters(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetBaseLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetContext(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDepthTextureCompareFunction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDepthTextureMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMagnificationFilter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaxLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMinificationFilter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWrapR(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWrapS(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWrapT(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UnBind(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
