/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKAMRDATASETCACHEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKAMRDATASETCACHEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkAMRDataSetCache.h>

#include "vtkObjectWrap.h"

class VtkAMRDataSetCacheWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkAMRDataSetCacheWrap(vtkSmartPointer<vtkAMRDataSetCache>);
		VtkAMRDataSetCacheWrap();
		~VtkAMRDataSetCacheWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetAMRBlock(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAMRBlockCellData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetAMRBlockPointData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InsertAMRBlock(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InsertAMRBlockCellData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void InsertAMRBlockPointData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
