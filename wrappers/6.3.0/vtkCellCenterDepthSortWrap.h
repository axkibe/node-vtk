/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCELLCENTERDEPTHSORTWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCELLCENTERDEPTHSORTWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCellCenterDepthSort.h>

#include "vtkVisibilitySortWrap.h"

class VtkCellCenterDepthSortWrap : public VtkVisibilitySortWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkCellCenterDepthSortWrap(vtkSmartPointer<vtkCellCenterDepthSort>);
		VtkCellCenterDepthSortWrap();
		~VtkCellCenterDepthSortWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNextCells(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InitTraversal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif