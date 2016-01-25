/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkRowQueryWrap.h"
#include "vtkSQLQueryWrap.h"
#include "vtkObjectWrap.h"
#include "vtkSQLDatabaseWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkSQLQueryWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkSQLQueryWrap::ptpl;

VtkSQLQueryWrap::VtkSQLQueryWrap()
{ }

VtkSQLQueryWrap::VtkSQLQueryWrap(vtkSmartPointer<vtkSQLQuery> _native)
{ native = _native; }

VtkSQLQueryWrap::~VtkSQLQueryWrap()
{ }

void VtkSQLQueryWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkRowQueryWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkRowQueryWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkSQLQueryWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkSQLQuery").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("SQLQuery").ToLocalChecked(),tpl->GetFunction());
}

void VtkSQLQueryWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDatabase", GetDatabase);
	Nan::SetPrototypeMethod(tpl, "getDatabase", GetDatabase);

	Nan::SetPrototypeMethod(tpl, "GetQuery", GetQuery);
	Nan::SetPrototypeMethod(tpl, "getQuery", GetQuery);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

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
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkSQLDatabaseWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSQLDatabaseWrap *w = new VtkSQLDatabaseWrap();
	w->native.TakeReference(r);
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
	if(info.Length() > 0 && info[0]->IsInt32())
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkSQLQueryWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSQLQueryWrap *w = new VtkSQLQueryWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSQLQueryWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSQLQueryWrap *wrapper = ObjectWrap::Unwrap<VtkSQLQueryWrap>(info.Holder());
	vtkSQLQuery *native = (vtkSQLQuery *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkSQLQueryWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSQLQueryWrap *w = new VtkSQLQueryWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

