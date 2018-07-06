/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSORTFILENAMESWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSORTFILENAMESWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkSortFileNames.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkSortFileNamesWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkSortFileNamesWrap(vtkSmartPointer<vtkSortFileNames>);
		VtkSortFileNamesWrap();
		~VtkSortFileNamesWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void GetFileNames(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetGrouping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetIgnoreCase(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetInputFileNames(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNthGroup(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfGroups(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumericSort(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetSkipDirectories(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GroupingOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GroupingOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IgnoreCaseOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IgnoreCaseOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NumericSortOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NumericSortOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGrouping(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetIgnoreCase(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetInputFileNames(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetNumericSort(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetSkipDirectories(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SkipDirectoriesOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SkipDirectoriesOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Update(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKSORTFILENAMESWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKSORTFILENAMESWRAP_CLASSDEF
#endif
};

#endif
