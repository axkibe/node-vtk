/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKGLOBFILENAMESWRAP_H
#define NATIVE_EXTENSION_VTK_VTKGLOBFILENAMESWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkGlobFileNames.h>

#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

class VtkGlobFileNamesWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkGlobFileNamesWrap(vtkSmartPointer<vtkGlobFileNames>);
		VtkGlobFileNamesWrap();
		~VtkGlobFileNamesWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddFileNames(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDirectory(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFileNames(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNthFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfFileNames(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRecurse(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RecurseOff(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RecurseOn(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Reset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDirectory(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetRecurse(const Nan::FunctionCallbackInfo<v8::Value>& info);

#ifdef VTK_NODE_PLUS_VTKGLOBFILENAMESWRAP_CLASSDEF
		VTK_NODE_PLUS_VTKGLOBFILENAMESWRAP_CLASSDEF
#endif
};

#endif
