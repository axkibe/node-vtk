/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkSQLQueryWrap.h"
#include "vtkSQLiteQueryWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSQLiteQueryWrap::ptpl;

VtkSQLiteQueryWrap::VtkSQLiteQueryWrap()
{ }

VtkSQLiteQueryWrap::VtkSQLiteQueryWrap(vtkSmartPointer<vtkSQLiteQuery> _native)
{ native = _native; }

VtkSQLiteQueryWrap::~VtkSQLiteQueryWrap()
{ }

void VtkSQLiteQueryWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSQLiteQuery").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SQLiteQuery").ToLocalChecked(), ConstructorGetter);
}

void VtkSQLiteQueryWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSQLiteQueryWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkSQLQueryWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkSQLQueryWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSQLiteQueryWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BeginTransaction", BeginTransaction);
	Nan::SetPrototypeMethod(tpl, "beginTransaction", BeginTransaction);

	Nan::SetPrototypeMethod(tpl, "BindParameter", BindParameter);
	Nan::SetPrototypeMethod(tpl, "bindParameter", BindParameter);

	Nan::SetPrototypeMethod(tpl, "ClearParameterBindings", ClearParameterBindings);
	Nan::SetPrototypeMethod(tpl, "clearParameterBindings", ClearParameterBindings);

	Nan::SetPrototypeMethod(tpl, "CommitTransaction", CommitTransaction);
	Nan::SetPrototypeMethod(tpl, "commitTransaction", CommitTransaction);

	Nan::SetPrototypeMethod(tpl, "Execute", Execute);
	Nan::SetPrototypeMethod(tpl, "execute", Execute);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFieldName", GetFieldName);
	Nan::SetPrototypeMethod(tpl, "getFieldName", GetFieldName);

	Nan::SetPrototypeMethod(tpl, "GetFieldType", GetFieldType);
	Nan::SetPrototypeMethod(tpl, "getFieldType", GetFieldType);

	Nan::SetPrototypeMethod(tpl, "GetLastErrorText", GetLastErrorText);
	Nan::SetPrototypeMethod(tpl, "getLastErrorText", GetLastErrorText);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfFields", GetNumberOfFields);
	Nan::SetPrototypeMethod(tpl, "getNumberOfFields", GetNumberOfFields);

	Nan::SetPrototypeMethod(tpl, "HasError", HasError);
	Nan::SetPrototypeMethod(tpl, "hasError", HasError);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "NextRow", NextRow);
	Nan::SetPrototypeMethod(tpl, "nextRow", NextRow);

	Nan::SetPrototypeMethod(tpl, "RollbackTransaction", RollbackTransaction);
	Nan::SetPrototypeMethod(tpl, "rollbackTransaction", RollbackTransaction);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetQuery", SetQuery);
	Nan::SetPrototypeMethod(tpl, "setQuery", SetQuery);

#ifdef VTK_NODE_PLUS_VTKSQLITEQUERYWRAP_INITPTPL
	VTK_NODE_PLUS_VTKSQLITEQUERYWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkSQLiteQueryWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSQLiteQuery> native = vtkSmartPointer<vtkSQLiteQuery>::New();
		VtkSQLiteQueryWrap* obj = new VtkSQLiteQueryWrap(native);
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

void VtkSQLiteQueryWrap::BeginTransaction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLiteQueryWrap *wrapper = ObjectWrap::Unwrap<VtkSQLiteQueryWrap>(info.Holder());
	vtkSQLiteQuery *native = (vtkSQLiteQuery *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->BeginTransaction();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSQLiteQueryWrap::BindParameter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLiteQueryWrap *wrapper = ObjectWrap::Unwrap<VtkSQLiteQueryWrap>(info.Holder());
	vtkSQLiteQuery *native = (vtkSQLiteQuery *)wrapper->native.GetPointer();
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
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSQLiteQueryWrap::ClearParameterBindings(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLiteQueryWrap *wrapper = ObjectWrap::Unwrap<VtkSQLiteQueryWrap>(info.Holder());
	vtkSQLiteQuery *native = (vtkSQLiteQuery *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->ClearParameterBindings();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSQLiteQueryWrap::CommitTransaction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLiteQueryWrap *wrapper = ObjectWrap::Unwrap<VtkSQLiteQueryWrap>(info.Holder());
	vtkSQLiteQuery *native = (vtkSQLiteQuery *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->CommitTransaction();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSQLiteQueryWrap::Execute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLiteQueryWrap *wrapper = ObjectWrap::Unwrap<VtkSQLiteQueryWrap>(info.Holder());
	vtkSQLiteQuery *native = (vtkSQLiteQuery *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->Execute();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSQLiteQueryWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLiteQueryWrap *wrapper = ObjectWrap::Unwrap<VtkSQLiteQueryWrap>(info.Holder());
	vtkSQLiteQuery *native = (vtkSQLiteQuery *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSQLiteQueryWrap::GetFieldName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLiteQueryWrap *wrapper = ObjectWrap::Unwrap<VtkSQLiteQueryWrap>(info.Holder());
	vtkSQLiteQuery *native = (vtkSQLiteQuery *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetFieldName(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSQLiteQueryWrap::GetFieldType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLiteQueryWrap *wrapper = ObjectWrap::Unwrap<VtkSQLiteQueryWrap>(info.Holder());
	vtkSQLiteQuery *native = (vtkSQLiteQuery *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetFieldType(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSQLiteQueryWrap::GetLastErrorText(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLiteQueryWrap *wrapper = ObjectWrap::Unwrap<VtkSQLiteQueryWrap>(info.Holder());
	vtkSQLiteQuery *native = (vtkSQLiteQuery *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLastErrorText();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSQLiteQueryWrap::GetNumberOfFields(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLiteQueryWrap *wrapper = ObjectWrap::Unwrap<VtkSQLiteQueryWrap>(info.Holder());
	vtkSQLiteQuery *native = (vtkSQLiteQuery *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfFields();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSQLiteQueryWrap::HasError(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLiteQueryWrap *wrapper = ObjectWrap::Unwrap<VtkSQLiteQueryWrap>(info.Holder());
	vtkSQLiteQuery *native = (vtkSQLiteQuery *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasError();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSQLiteQueryWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLiteQueryWrap *wrapper = ObjectWrap::Unwrap<VtkSQLiteQueryWrap>(info.Holder());
	vtkSQLiteQuery *native = (vtkSQLiteQuery *)wrapper->native.GetPointer();
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

void VtkSQLiteQueryWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLiteQueryWrap *wrapper = ObjectWrap::Unwrap<VtkSQLiteQueryWrap>(info.Holder());
	vtkSQLiteQuery *native = (vtkSQLiteQuery *)wrapper->native.GetPointer();
	vtkSQLiteQuery * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkSQLiteQueryWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSQLiteQueryWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSQLiteQueryWrap *w = new VtkSQLiteQueryWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSQLiteQueryWrap::NextRow(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLiteQueryWrap *wrapper = ObjectWrap::Unwrap<VtkSQLiteQueryWrap>(info.Holder());
	vtkSQLiteQuery *native = (vtkSQLiteQuery *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NextRow();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSQLiteQueryWrap::RollbackTransaction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLiteQueryWrap *wrapper = ObjectWrap::Unwrap<VtkSQLiteQueryWrap>(info.Holder());
	vtkSQLiteQuery *native = (vtkSQLiteQuery *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->RollbackTransaction();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSQLiteQueryWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLiteQueryWrap *wrapper = ObjectWrap::Unwrap<VtkSQLiteQueryWrap>(info.Holder());
	vtkSQLiteQuery *native = (vtkSQLiteQuery *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSQLiteQuery * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkSQLiteQueryWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSQLiteQueryWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSQLiteQueryWrap *w = new VtkSQLiteQueryWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSQLiteQueryWrap::SetQuery(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLiteQueryWrap *wrapper = ObjectWrap::Unwrap<VtkSQLiteQueryWrap>(info.Holder());
	vtkSQLiteQuery *native = (vtkSQLiteQuery *)wrapper->native.GetPointer();
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

