/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGL2PSUTILITIESWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGL2PSUTILITIESWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGL2PSUtilities.h>

#include "vtkObjectWrap.h"

class VtkGL2PSUtilitiesWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkGL2PSUtilitiesWrap(vtkSmartPointer<vtkGL2PSUtilities>);
		VtkGL2PSUtilitiesWrap();
		~VtkGL2PSUtilitiesWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void DrawString(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRenderWindow(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTextAsPath(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TextPropertyToGL2PSAlignment(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void TextPropertyToPSFontName(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
