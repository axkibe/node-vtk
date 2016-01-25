/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKCONVERTSELECTIONWRAP_H
#define NATIVE_EXTENSION_VTK_VTKCONVERTSELECTIONWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkConvertSelection.h>

#include "vtkSelectionAlgorithmWrap.h"

class VtkConvertSelectionWrap : public VtkSelectionAlgorithmWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitTpl(v8::Local<v8::FunctionTemplate> tpl);

		VtkConvertSelectionWrap(vtkSmartPointer<vtkConvertSelection>);
		VtkConvertSelectionWrap();
		~VtkConvertSelectionWrap( );
		static Nan::Persistent<v8::Function> constructor;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ClearArrayNames(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetArrayNames(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInputFieldType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetOutputType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectedCells(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectedEdges(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectedItems(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectedPoints(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectedRows(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectedVertices(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSelectionExtractor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MatchAnyValuesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MatchAnyValuesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetArrayNames(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDataObjectConnection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputFieldType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetOutputType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSelectionExtractor(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ToGlobalIdSelection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ToIndexSelection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ToPedigreeIdSelection(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ToSelectionType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ToValueSelection(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
