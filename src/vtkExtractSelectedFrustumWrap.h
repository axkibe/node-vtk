/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKEXTRACTSELECTEDFRUSTUMWRAP_H
#define NATIVE_EXTENSION_VTK_VTKEXTRACTSELECTEDFRUSTUMWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkExtractSelectedFrustum.h>

#include "vtkExtractSelectionBaseWrap.h"

class VtkExtractSelectedFrustumWrap : public VtkExtractSelectionBaseWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkExtractSelectedFrustumWrap(vtkSmartPointer<vtkExtractSelectedFrustum>);
		VtkExtractSelectedFrustumWrap();
		~VtkExtractSelectedFrustumWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClipPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetContainingCells(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFieldType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFrustum(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInsideOut(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetShowBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InsideOutOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InsideOutOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetContainingCells(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFieldType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetFrustum(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInsideOut(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetShowBounds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShowBoundsOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ShowBoundsOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
