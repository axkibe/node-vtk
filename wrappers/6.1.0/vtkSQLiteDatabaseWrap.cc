/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkSQLDatabaseWrap.h"
#include "vtkSQLiteDatabaseWrap.h"
#include "vtkObjectWrap.h"
#include "vtkSQLQueryWrap.h"
#include "vtkStringArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSQLiteDatabaseWrap::ptpl;

VtkSQLiteDatabaseWrap::VtkSQLiteDatabaseWrap()
{ }

VtkSQLiteDatabaseWrap::VtkSQLiteDatabaseWrap(vtkSmartPointer<vtkSQLiteDatabase> _native)
{ native = _native; }

VtkSQLiteDatabaseWrap::~VtkSQLiteDatabaseWrap()
{ }

void VtkSQLiteDatabaseWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSQLiteDatabase").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SQLiteDatabase").ToLocalChecked(), ConstructorGetter);
}

void VtkSQLiteDatabaseWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSQLiteDatabaseWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkSQLDatabaseWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkSQLDatabaseWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSQLiteDatabaseWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Close", Close);
	Nan::SetPrototypeMethod(tpl, "close", Close);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDatabaseFileName", GetDatabaseFileName);
	Nan::SetPrototypeMethod(tpl, "getDatabaseFileName", GetDatabaseFileName);

	Nan::SetPrototypeMethod(tpl, "GetDatabaseType", GetDatabaseType);
	Nan::SetPrototypeMethod(tpl, "getDatabaseType", GetDatabaseType);

	Nan::SetPrototypeMethod(tpl, "GetLastErrorText", GetLastErrorText);
	Nan::SetPrototypeMethod(tpl, "getLastErrorText", GetLastErrorText);

	Nan::SetPrototypeMethod(tpl, "GetQueryInstance", GetQueryInstance);
	Nan::SetPrototypeMethod(tpl, "getQueryInstance", GetQueryInstance);

	Nan::SetPrototypeMethod(tpl, "GetRecord", GetRecord);
	Nan::SetPrototypeMethod(tpl, "getRecord", GetRecord);

	Nan::SetPrototypeMethod(tpl, "GetTables", GetTables);
	Nan::SetPrototypeMethod(tpl, "getTables", GetTables);

	Nan::SetPrototypeMethod(tpl, "HasError", HasError);
	Nan::SetPrototypeMethod(tpl, "hasError", HasError);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsOpen", IsOpen);
	Nan::SetPrototypeMethod(tpl, "isOpen", IsOpen);

	Nan::SetPrototypeMethod(tpl, "IsSupported", IsSupported);
	Nan::SetPrototypeMethod(tpl, "isSupported", IsSupported);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Open", Open);
	Nan::SetPrototypeMethod(tpl, "open", Open);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDatabaseFileName", SetDatabaseFileName);
	Nan::SetPrototypeMethod(tpl, "setDatabaseFileName", SetDatabaseFileName);

	ptpl.Reset( tpl );
}

void VtkSQLiteDatabaseWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSQLiteDatabase> native = vtkSmartPointer<vtkSQLiteDatabase>::New();
		VtkSQLiteDatabaseWrap* obj = new VtkSQLiteDatabaseWrap(native);
		obj->Wrap(info.This());
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

void VtkSQLiteDatabaseWrap::Close(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLiteDatabaseWrap *wrapper = ObjectWrap::Unwrap<VtkSQLiteDatabaseWrap>(info.Holder());
	vtkSQLiteDatabase *native = (vtkSQLiteDatabase *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Close();
}

void VtkSQLiteDatabaseWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLiteDatabaseWrap *wrapper = ObjectWrap::Unwrap<VtkSQLiteDatabaseWrap>(info.Holder());
	vtkSQLiteDatabase *native = (vtkSQLiteDatabase *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSQLiteDatabaseWrap::GetDatabaseFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLiteDatabaseWrap *wrapper = ObjectWrap::Unwrap<VtkSQLiteDatabaseWrap>(info.Holder());
	vtkSQLiteDatabase *native = (vtkSQLiteDatabase *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDatabaseFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSQLiteDatabaseWrap::GetDatabaseType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLiteDatabaseWrap *wrapper = ObjectWrap::Unwrap<VtkSQLiteDatabaseWrap>(info.Holder());
	vtkSQLiteDatabase *native = (vtkSQLiteDatabase *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDatabaseType();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSQLiteDatabaseWrap::GetLastErrorText(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLiteDatabaseWrap *wrapper = ObjectWrap::Unwrap<VtkSQLiteDatabaseWrap>(info.Holder());
	vtkSQLiteDatabase *native = (vtkSQLiteDatabase *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLastErrorText();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSQLiteDatabaseWrap::GetQueryInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLiteDatabaseWrap *wrapper = ObjectWrap::Unwrap<VtkSQLiteDatabaseWrap>(info.Holder());
	vtkSQLiteDatabase *native = (vtkSQLiteDatabase *)wrapper->native.GetPointer();
	vtkSQLQuery * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetQueryInstance();
		VtkSQLQueryWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSQLQueryWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSQLQueryWrap *w = new VtkSQLQueryWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSQLiteDatabaseWrap::GetRecord(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLiteDatabaseWrap *wrapper = ObjectWrap::Unwrap<VtkSQLiteDatabaseWrap>(info.Holder());
	vtkSQLiteDatabase *native = (vtkSQLiteDatabase *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		vtkStringArray * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetRecord(
			*a0
		);
			VtkStringArrayWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkStringArrayWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkStringArrayWrap *w = new VtkStringArrayWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSQLiteDatabaseWrap::GetTables(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLiteDatabaseWrap *wrapper = ObjectWrap::Unwrap<VtkSQLiteDatabaseWrap>(info.Holder());
	vtkSQLiteDatabase *native = (vtkSQLiteDatabase *)wrapper->native.GetPointer();
	vtkStringArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTables();
		VtkStringArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStringArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStringArrayWrap *w = new VtkStringArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSQLiteDatabaseWrap::HasError(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLiteDatabaseWrap *wrapper = ObjectWrap::Unwrap<VtkSQLiteDatabaseWrap>(info.Holder());
	vtkSQLiteDatabase *native = (vtkSQLiteDatabase *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasError();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSQLiteDatabaseWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLiteDatabaseWrap *wrapper = ObjectWrap::Unwrap<VtkSQLiteDatabaseWrap>(info.Holder());
	vtkSQLiteDatabase *native = (vtkSQLiteDatabase *)wrapper->native.GetPointer();
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

void VtkSQLiteDatabaseWrap::IsOpen(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLiteDatabaseWrap *wrapper = ObjectWrap::Unwrap<VtkSQLiteDatabaseWrap>(info.Holder());
	vtkSQLiteDatabase *native = (vtkSQLiteDatabase *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsOpen();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSQLiteDatabaseWrap::IsSupported(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLiteDatabaseWrap *wrapper = ObjectWrap::Unwrap<VtkSQLiteDatabaseWrap>(info.Holder());
	vtkSQLiteDatabase *native = (vtkSQLiteDatabase *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		bool r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsSupported(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSQLiteDatabaseWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLiteDatabaseWrap *wrapper = ObjectWrap::Unwrap<VtkSQLiteDatabaseWrap>(info.Holder());
	vtkSQLiteDatabase *native = (vtkSQLiteDatabase *)wrapper->native.GetPointer();
	vtkSQLiteDatabase * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkSQLiteDatabaseWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSQLiteDatabaseWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSQLiteDatabaseWrap *w = new VtkSQLiteDatabaseWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSQLiteDatabaseWrap::Open(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLiteDatabaseWrap *wrapper = ObjectWrap::Unwrap<VtkSQLiteDatabaseWrap>(info.Holder());
	vtkSQLiteDatabase *native = (vtkSQLiteDatabase *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			bool r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->Open(
				*a0,
				info[1]->Int32Value()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
		bool r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Open(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSQLiteDatabaseWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLiteDatabaseWrap *wrapper = ObjectWrap::Unwrap<VtkSQLiteDatabaseWrap>(info.Holder());
	vtkSQLiteDatabase *native = (vtkSQLiteDatabase *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSQLiteDatabase * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkSQLiteDatabaseWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSQLiteDatabaseWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSQLiteDatabaseWrap *w = new VtkSQLiteDatabaseWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSQLiteDatabaseWrap::SetDatabaseFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLiteDatabaseWrap *wrapper = ObjectWrap::Unwrap<VtkSQLiteDatabaseWrap>(info.Holder());
	vtkSQLiteDatabase *native = (vtkSQLiteDatabase *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDatabaseFileName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

