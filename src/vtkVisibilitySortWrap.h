/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKVISIBILITYSORTWRAP_H
#define NATIVE_EXTENSION_VTK_VTKVISIBILITYSORTWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkVisibilitySort.h>

#include "vtkObjectWrap.h"

class VtkVisibilitySortWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkVisibilitySortWrap(vtkSmartPointer<vtkVisibilitySort>);
		VtkVisibilitySortWrap();
		~VtkVisibilitySortWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetCamera(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDirection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInverseModelTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaxCellsReturned(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaxCellsReturnedMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaxCellsReturnedMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetModelTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNextCells(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InitTraversal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetCamera(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDirection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDirectionToBackToFront(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDirectionToFrontToBack(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInput(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaxCellsReturned(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetModelTransform(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
