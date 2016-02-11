/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkTableAlgorithmWrap.h"
#include "vtkDatabaseToTableReaderWrap.h"
#include "vtkObjectWrap.h"
#include "vtkSQLDatabaseWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDatabaseToTableReaderWrap::ptpl;

VtkDatabaseToTableReaderWrap::VtkDatabaseToTableReaderWrap()
{ }

VtkDatabaseToTableReaderWrap::VtkDatabaseToTableReaderWrap(vtkSmartPointer<vtkDatabaseToTableReader> _native)
{ native = _native; }

VtkDatabaseToTableReaderWrap::~VtkDatabaseToTableReaderWrap()
{ }

void VtkDatabaseToTableReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDatabaseToTableReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DatabaseToTableReader").ToLocalChecked(), ConstructorGetter);
}

void VtkDatabaseToTableReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDatabaseToTableReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkTableAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkTableAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDatabaseToTableReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CheckIfTableExists", CheckIfTableExists);
	Nan::SetPrototypeMethod(tpl, "checkIfTableExists", CheckIfTableExists);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDatabase", GetDatabase);
	Nan::SetPrototypeMethod(tpl, "getDatabase", GetDatabase);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDatabase", SetDatabase);
	Nan::SetPrototypeMethod(tpl, "setDatabase", SetDatabase);

	Nan::SetPrototypeMethod(tpl, "SetTableName", SetTableName);
	Nan::SetPrototypeMethod(tpl, "setTableName", SetTableName);

	ptpl.Reset( tpl );
}

void VtkDatabaseToTableReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkDatabaseToTableReaderWrap::CheckIfTableExists(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDatabaseToTableReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDatabaseToTableReaderWrap>(info.Holder());
	vtkDatabaseToTableReader *native = (vtkDatabaseToTableReader *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->CheckIfTableExists();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDatabaseToTableReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDatabaseToTableReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDatabaseToTableReaderWrap>(info.Holder());
	vtkDatabaseToTableReader *native = (vtkDatabaseToTableReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDatabaseToTableReaderWrap::GetDatabase(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDatabaseToTableReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDatabaseToTableReaderWrap>(info.Holder());
	vtkDatabaseToTableReader *native = (vtkDatabaseToTableReader *)wrapper->native.GetPointer();
	vtkSQLDatabase * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDatabase();
	VtkSQLDatabaseWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSQLDatabaseWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSQLDatabaseWrap *w = new VtkSQLDatabaseWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDatabaseToTableReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDatabaseToTableReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDatabaseToTableReaderWrap>(info.Holder());
	vtkDatabaseToTableReader *native = (vtkDatabaseToTableReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDatabaseToTableReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDatabaseToTableReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDatabaseToTableReaderWrap>(info.Holder());
	vtkDatabaseToTableReader *native = (vtkDatabaseToTableReader *)wrapper->native.GetPointer();
	vtkDatabaseToTableReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkDatabaseToTableReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDatabaseToTableReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDatabaseToTableReaderWrap *w = new VtkDatabaseToTableReaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDatabaseToTableReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDatabaseToTableReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDatabaseToTableReaderWrap>(info.Holder());
	vtkDatabaseToTableReader *native = (vtkDatabaseToTableReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDatabaseToTableReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkDatabaseToTableReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDatabaseToTableReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDatabaseToTableReaderWrap *w = new VtkDatabaseToTableReaderWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDatabaseToTableReaderWrap::SetDatabase(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDatabaseToTableReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDatabaseToTableReaderWrap>(info.Holder());
	vtkDatabaseToTableReader *native = (vtkDatabaseToTableReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSQLDatabaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSQLDatabaseWrap *a0 = ObjectWrap::Unwrap<VtkSQLDatabaseWrap>(info[0]->ToObject());
		bool r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SetDatabase(
			(vtkSQLDatabase *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDatabaseToTableReaderWrap::SetTableName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDatabaseToTableReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDatabaseToTableReaderWrap>(info.Holder());
	vtkDatabaseToTableReader *native = (vtkDatabaseToTableReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		bool r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SetTableName(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

