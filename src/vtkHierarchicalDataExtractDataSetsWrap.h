/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKHIERARCHICALDATAEXTRACTDATASETSWRAP_H
#define NATIVE_EXTENSION_VTK_VTKHIERARCHICALDATAEXTRACTDATASETSWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkHierarchicalDataExtractDataSets.h>

#include "vtkExtractDataSetsWrap.h"

class VtkHierarchicalDataExtractDataSetsWrap : public VtkExtractDataSetsWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkHierarchicalDataExtractDataSetsWrap(vtkSmartPointer<vtkHierarchicalDataExtractDataSets>);
		VtkHierarchicalDataExtractDataSetsWrap();
		~VtkHierarchicalDataExtractDataSetsWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
