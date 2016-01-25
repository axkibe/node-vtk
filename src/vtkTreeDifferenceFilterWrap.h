/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTREEDIFFERENCEFILTERWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTREEDIFFERENCEFILTERWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTreeDifferenceFilter.h>

#include "vtkGraphAlgorithmWrap.h"

class VtkTreeDifferenceFilterWrap : public VtkGraphAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkTreeDifferenceFilterWrap(vtkSmartPointer<vtkTreeDifferenceFilter>);
		VtkTreeDifferenceFilterWrap();
		~VtkTreeDifferenceFilterWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetComparisonArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetComparisonArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIdArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
