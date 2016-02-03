/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSQLITEQUERYWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSQLITEQUERYWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkSQLiteQuery.h>

#include "vtkSQLQueryWrap.h"

class VtkSQLiteQueryWrap : public VtkSQLQueryWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkSQLiteQueryWrap(vtkSmartPointer<vtkSQLiteQuery>);
		VtkSQLiteQueryWrap();
		~VtkSQLiteQueryWrap( );
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void BeginTransaction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void BindParameter(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void ClearParameterBindings(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void CommitTransaction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void Execute(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFieldName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetFieldType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLastErrorText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetNumberOfFields(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void HasError(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NextRow(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void RollbackTransaction(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetQuery(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
