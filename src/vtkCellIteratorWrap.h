/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCELLITERATORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCELLITERATORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkCellIterator.h>

#include "vtkObjectWrap.h"

class VtkCellIteratorWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkCellIteratorWrap(vtkSmartPointer<vtkCellIterator>);
		VtkCellIteratorWrap();
		~VtkCellIteratorWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetCell(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetCellType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFaces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPointIds(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GoToNextCell(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InitTraversal(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsTypeOf(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
