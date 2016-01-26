/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#ifndef NATIVE_EXTENSION_VTK_VTKSQLITEDATABASEWRAP_H
#define NATIVE_EXTENSION_VTK_VTKSQLITEDATABASEWRAP_H

#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkSQLiteDatabase.h>

#include "vtkSQLDatabaseWrap.h"

class VtkSQLiteDatabaseWrap : public VtkSQLDatabaseWrap
{
	public:
		using Nan::ObjectWrap::Wrap;
		static void Init(v8::Local<v8::Object> exports);
		static void InitPtpl();
		static void ConstructorGetter(
			v8::Local<v8::String> property,
			const Nan::PropertyCallbackInfo<v8::Value>& info);

		VtkSQLiteDatabaseWrap(vtkSmartPointer<vtkSQLiteDatabase>);
		VtkSQLiteDatabaseWrap();
		~VtkSQLiteDatabaseWrap( );
		static Nan::Persistent<v8::Function> constructor;
		static Nan::Persistent<v8::FunctionTemplate> ptpl;

	private:
		static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

		static void Close(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDatabaseFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetDatabaseType(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetLastErrorText(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetQueryInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetRecord(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void GetTables(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void IsA(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info);
		static void SetDatabaseFileName(const Nan::FunctionCallbackInfo<v8::Value>& info);
};

#endif
