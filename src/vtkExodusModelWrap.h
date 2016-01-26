/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKEXODUSMODELWRAP_H
#define NATIVE_EXTENSION_VTK_VTKEXODUSMODELWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkExodusModel.h>

#include "vtkObjectWrap.h"

class VtkExodusModelWrap : public VtkObjectWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkExodusModelWrap(vtkSmartPointer<vtkExodusModel>);
		VtkExodusModelWrap();
		~VtkExodusModelWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void AddUGridElementVariable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void AddUGridNodeVariable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ExtractExodusModel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetModelMetadata(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasMetadata(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void MergeExodusModel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void PackExodusModel(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveUGridElementVariable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RemoveUGridNodeVariable(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Reset(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetGlobalInformation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetLocalInformation(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetModelMetadata(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void UnpackExodusModel(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
