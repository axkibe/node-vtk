/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKMULTIPIECEDATASETWRAP_H
#define NATIVE_EXTENSION_VTK_VTKMULTIPIECEDATASETWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkMultiPieceDataSet.h>

#include "vtkDataObjectTreeWrap.h"
#include "../../plus/plus.h"

class VtkMultiPieceDataSetWrap : public VtkDataObjectTreeWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkMultiPieceDataSetWrap(vtkSmartPointer<vtkMultiPieceDataSet>);
		VtkMultiPieceDataSetWrap();
		~VtkMultiPieceDataSetWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDataObjectType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMetaData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPieces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPiece(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPieceAsDataObject(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasMetaData(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfPieces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPiece(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKMULTIPIECEDATASETWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKMULTIPIECEDATASETWRAP_CLASSDEF
#endif
};

#endif
