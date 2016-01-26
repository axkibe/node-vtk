/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKTABLEEXTENTTRANSLATORWRAP_H
#define NATIVE_EXTENSION_VTK_VTKTABLEEXTENTTRANSLATORWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkTableExtentTranslator.h>

#include "vtkExtentTranslatorWrap.h"

class VtkTableExtentTranslatorWrap : public VtkExtentTranslatorWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkTableExtentTranslatorWrap(vtkSmartPointer<vtkTableExtentTranslator>);
		VtkTableExtentTranslatorWrap();
		~VtkTableExtentTranslatorWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetMaximumGhostLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfPiecesInTable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetPieceAvailable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PieceToExtent(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PieceToExtentByPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetMaximumGhostLevel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfPieces(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumberOfPiecesInTable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetPieceAvailable(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
