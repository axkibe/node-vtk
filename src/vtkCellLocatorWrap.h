/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCELLLOCATORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCELLLOCATORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCellLocator.h>

#include "vtkAbstractCellLocatorWrap.h"

class VtkCellLocatorWrap : public VtkAbstractCellLocatorWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkCellLocatorWrap(vtkSmartPointer<vtkCellLocator>);
		VtkCellLocatorWrap();
		~VtkCellLocatorWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BuildLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BuildLocatorIfNeeded(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BuildLocatorInternal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ForceBuildLocator(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void FreeSearchStructure(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GenerateRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCells(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfBuckets(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfCellsPerBucket(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfCellsPerBucket(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
