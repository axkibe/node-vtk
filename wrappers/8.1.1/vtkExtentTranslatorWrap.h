/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKEXTENTTRANSLATORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKEXTENTTRANSLATORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkExtentTranslator.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkExtentTranslatorWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkExtentTranslatorWrap(vtkSmartPointer<vtkExtentTranslator>);
		VtkExtentTranslatorWrap();
		~VtkExtentTranslatorWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGhostLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPieces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPiece(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSplitMode(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PieceToExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PieceToExtentByPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGhostLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfPieces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPiece(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSplitModeToBlock(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSplitModeToXSlab(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSplitModeToYSlab(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSplitModeToZSlab(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UPDATE_SPLIT_MODE(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKEXTENTTRANSLATORWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKEXTENTTRANSLATORWRAP_CLASSDEF
#endif
};

#endif
