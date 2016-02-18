/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkRowQueryWrap.h"
#include "vtkSQLQueryWrap.h"
#include "vtkObjectWrap.h"
#include "vtkSQLDatabaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSQLQueryWrap::ptpl;

VtkSQLQueryWrap::VtkSQLQueryWrap()
{ }

VtkSQLQueryWrap::VtkSQLQueryWrap(vtkSmartPointer<vtkSQLQuery> _native)
{ native = _native; }

VtkSQLQueryWrap::~VtkSQLQueryWrap()
{ }

void VtkSQLQueryWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSQLQuery").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SQLQuery").ToLocalChecked(), ConstructorGetter);
}

void VtkSQLQueryWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSQLQueryWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkRowQueryWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkRowQueryWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSQLQueryWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BeginTransaction", BeginTransaction);
	Nan::SetPrototypeMethod(tpl, "beginTransaction", BeginTransaction);

	Nan::SetPrototypeMethod(tpl, "BindParameter", BindParameter);
	Nan::SetPrototypeMethod(tpl, "bindParameter", BindParameter);

	Nan::SetPrototypeMethod(tpl, "ClearParameterBindings", ClearParameterBindings);
	Nan::SetPrototypeMethod(tpl, "clearParameterBindings", ClearParameterBindings);

	Nan::SetPrototypeMethod(tpl, "CommitTransaction", CommitTransaction);
	Nan::SetPrototypeMethod(tpl, "commitTransaction", CommitTransaction);

	Nan::SetPrototypeMethod(tpl, "EscapeString", EscapeString);
	Nan::SetPrototypeMethod(tpl, "escapeString", EscapeString);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDatabase", GetDatabase);
	Nan::SetPrototypeMethod(tpl, "getDatabase", GetDatabase);

	Nan::SetPrototypeMethod(tpl, "GetQuery", GetQuery);
	Nan::SetPrototypeMethod(tpl, "getQuery", GetQuery);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsActive", IsActive);
	Nan::SetPrototypeMethod(tpl, "isActive", IsActive);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RollbackTransaction", RollbackTransaction);
	Nan::SetPrototypeMethod(tpl, "rollbackTransaction", RollbackTransaction);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetQuery", SetQuery);
	Nan::SetPrototypeMethod(tpl, "setQuery", SetQuery);

#ifdef VTK_NODE_PLUS_VTKSQLQUERYWRAP_INITPTPL
	VTK_NODE_PLUS_VTKSQLQUERYWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkSQLQueryWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkSQLQueryWrap::BeginTransaction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLQueryWrap *wrapper = ObjectWrap::Unwrap<VtkSQLQueryWrap>(info.Holder());
	vtkSQLQuery *native = (vtkSQLQuery *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->BeginTransaction();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSQLQueryWrap::BindParameter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLQueryWrap *wrapper = ObjectWrap::Unwrap<VtkSQLQueryWrap>(info.Holder());
	vtkSQLQuery *native = (vtkSQLQuery *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsString())
		{
			Nan::Utf8String a1(info[1]);
			bool r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->BindParameter(
				info[0]->Int32Value(),
				*a1
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
		else if(info.Length() > 1 && info[1]->IsUint32())
		{
			bool r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->BindParameter(
				info[0]->Int32Value(),
				info[1]->Uint32Value()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
		else if(info.Length() > 1 && info[1]->IsUint32())
		{
			bool r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->BindParameter(
				info[0]->Int32Value(),
				info[1]->Uint32Value()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
		else if(info.Length() > 1 && info[1]->IsUint32())
		{
			bool r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->BindParameter(
				info[0]->Int32Value(),
				info[1]->Uint32Value()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
		else if(info.Length() > 1 && info[1]->IsInt32())
		{
			bool r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->BindParameter(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
		else if(info.Length() > 1 && info[1]->IsNumber())
		{
			bool r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->BindParameter(
				info[0]->Int32Value(),
				info[1]->NumberValue()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
		else if(info.Length() > 1 && info[1]->IsInt32())
		{
			bool r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->BindParameter(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
		else if(info.Length() > 1 && info[1]->IsInt32())
		{
			bool r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->BindParameter(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSQLQueryWrap::ClearParameterBindings(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLQueryWrap *wrapper = ObjectWrap::Unwrap<VtkSQLQueryWrap>(info.Holder());
	vtkSQLQuery *native = (vtkSQLQuery *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->ClearParameterBindings();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSQLQueryWrap::CommitTransaction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLQueryWrap *wrapper = ObjectWrap::Unwrap<VtkSQLQueryWrap>(info.Holder());
	vtkSQLQuery *native = (vtkSQLQuery *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->CommitTransaction();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSQLQueryWrap::EscapeString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLQueryWrap *wrapper = ObjectWrap::Unwrap<VtkSQLQueryWrap>(info.Holder());
	vtkSQLQuery *native = (vtkSQLQuery *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsBoolean())
		{
			char const * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->EscapeString(
				*a0,
				info[1]->BooleanValue()
			);
			info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSQLQueryWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLQueryWrap *wrapper = ObjectWrap::Unwrap<VtkSQLQueryWrap>(info.Holder());
	vtkSQLQuery *native = (vtkSQLQuery *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSQLQueryWrap::GetDatabase(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLQueryWrap *wrapper = ObjectWrap::Unwrap<VtkSQLQueryWrap>(info.Holder());
	vtkSQLQuery *native = (vtkSQLQuery *)wrapper->native.GetPointer();
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

void VtkSQLQueryWrap::GetQuery(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLQueryWrap *wrapper = ObjectWrap::Unwrap<VtkSQLQueryWrap>(info.Holder());
	vtkSQLQuery *native = (vtkSQLQuery *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetQuery();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSQLQueryWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLQueryWrap *wrapper = ObjectWrap::Unwrap<VtkSQLQueryWrap>(info.Holder());
	vtkSQLQuery *native = (vtkSQLQuery *)wrapper->native.GetPointer();
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

void VtkSQLQueryWrap::IsActive(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLQueryWrap *wrapper = ObjectWrap::Unwrap<VtkSQLQueryWrap>(info.Holder());
	vtkSQLQuery *native = (vtkSQLQuery *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsActive();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSQLQueryWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLQueryWrap *wrapper = ObjectWrap::Unwrap<VtkSQLQueryWrap>(info.Holder());
	vtkSQLQuery *native = (vtkSQLQuery *)wrapper->native.GetPointer();
	vtkSQLQuery * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
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

void VtkSQLQueryWrap::RollbackTransaction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLQueryWrap *wrapper = ObjectWrap::Unwrap<VtkSQLQueryWrap>(info.Holder());
	vtkSQLQuery *native = (vtkSQLQuery *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->RollbackTransaction();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSQLQueryWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLQueryWrap *wrapper = ObjectWrap::Unwrap<VtkSQLQueryWrap>(info.Holder());
	vtkSQLQuery *native = (vtkSQLQuery *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSQLQuery * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
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
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSQLQueryWrap::SetQuery(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLQueryWrap *wrapper = ObjectWrap::Unwrap<VtkSQLQueryWrap>(info.Holder());
	vtkSQLQuery *native = (vtkSQLQuery *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		bool r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SetQuery(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

